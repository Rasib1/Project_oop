#include "Unit.hpp"
#include "Hero.hpp"

#include<vector>
#include<list>
#pragma once
using namespace std;


class ObjectCreator{
    public:
    Unit* getObject(int x, int y);
};

