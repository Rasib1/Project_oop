#include "Unit.hpp"
#include "Hero.hpp"
#include "Enemy.hpp"
#include "horizontalobject1.hpp"

#include<vector>
#include<list>
#pragma once
using namespace std;


class ObjectCreator{
    public:
    Unit* getObject(int x, int y);
    Unit* getenemy(int x, int y);
    Unit* getHo(int x, int y);


};