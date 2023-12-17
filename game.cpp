#include "game.hpp"
#include "Runner.hpp"
#include "drawing.hpp"

SDL_Renderer* Drawing::gRenderer = NULL;
SDL_Texture* Drawing::assets = NULL;
SDL_Texture* Drawing::assets2 = NULL;
SDL_Texture* Drawing::assets3 = NULL;
SDL_Texture* Drawing::assets4 = NULL;
SDL_Texture* Drawing::assets5 = NULL;





bool Game::init()
{
	//Initialization flag
	bool success = true;


	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

		//Create window
		gWindow = SDL_CreateWindow( "Runner", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			Drawing::gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
			if( Drawing::gRenderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( Drawing::gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
					success = false;
				}

			}
		}
	}

	return success;
}

bool Game::loadMedia()
{
	//Loading success flag
	bool success = true;
	
	Drawing::assets = loadTexture("assets.png");
	Drawing::assets2 = loadTexture("assets2.png");
	Drawing::assets3 = loadTexture("assets3.png");
	Drawing::assets4 = loadTexture("assets4.png");
	Drawing::assets5 = loadTexture("assets5.png");




    gTexture = loadTexture("background.png");
	if(Drawing::assets==NULL|| Drawing::assets2==NULL || Drawing::assets3==NULL ||Drawing::assets4==NULL || Drawing::assets5==NULL || gTexture==NULL)
    {
        printf("Unable to run due to error: %s\n",SDL_GetError());
        success =false;
    }
	return success;
}

void Game::close()
{
	//Free loaded images
	SDL_DestroyTexture(Drawing::assets);
	SDL_DestroyTexture(Drawing::assets2);
	SDL_DestroyTexture(Drawing::assets3);
	SDL_DestroyTexture(Drawing::assets4);
	SDL_DestroyTexture(Drawing::assets5);




	Drawing::assets=NULL;
	Drawing::assets2=NULL;
	Drawing::assets3=NULL;
	Drawing::assets4=NULL;
	Drawing::assets5=NULL;




	SDL_DestroyTexture(gTexture);
	
	//Destroy window
	SDL_DestroyRenderer( Drawing::gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	Drawing::gRenderer = NULL;
	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

SDL_Texture* Game::loadTexture( std::string path )
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( Drawing::gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}
void Game::run( )
{
	int count=0;
	bool once = true;
	bool quit = false;
	SDL_Event e;

	Runner runner;
	// runner.CreateEnemy();

	while( !quit )
	{
		//Handle events on queue
		while( SDL_PollEvent( &e ) != 0 )
		{
			//User requests quit
			if( e.type == SDL_QUIT )
					{
						quit = true;
					}
					if(e.type == SDL_KEYDOWN)	
					{
						runner.move( e.key.keysym.sym);
					}
						//runner.fly( e.key.keysym.sym);
		}
		runner.move();
		// runner.moveobject();
		SDL_RenderClear(Drawing::gRenderer); //removes everything from renderer
		SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL);//Draws background to renderer
		//***********************draw the objects here********************


		count += 1;
		runner.drawObjects();
		// runner.drawEnemy();
		// runner.drawEnemy(Drawing assets2);
		runner.drawEnemy();
		runner.drawHo();
		runner.drawfire();
		runner.drawplent();


		if(once == true)
		{
			runner.createObject(20, 398);
			once = false;
		}
		else if(count % 20 == 0)
		{
			cout<<"New Enemy Created"<<endl;
			runner.CreateEnemy(950,398);

		}
		else if(count % 10 == 0)
		{
			cout<<"New Hobject Created"<<endl;
			runner.CreateHo(950,200);

		}
		else if(count % 15 == 0)
		{
			cout<<"New fobject Created"<<endl;
			runner.Createfire(20,300);
		}
		else if(count % 5 == 0)
		{
			cout<<"New pobject Created"<<endl;
			runner.Createplent(20,70);
		}


		if(runner.DetectCollision())
		{

				quit = true;
		}

		

		//****************************************************************
    	SDL_RenderPresent(Drawing::gRenderer); //displays the updated renderer

	    SDL_Delay(100);	//causes sdl engine to delay for specified miliseconds
	}
			
}
