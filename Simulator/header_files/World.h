/* 
 * File: World.h
 */

#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <vector>
#include "Cell.h"
#include "Exception.h"
#include "Structs.h"

class World{
private:
    //Dimensions of the World
    int width;
    int height;
    //All the Cells of the world, in 2D vector
    std::vector< std::vector<Cell> > worldCells;
public:
    World();
    ~World();
    void load(std::string filename);
    void executeCycle();
    Cell getCell(tposition pos);
    tposition adjacent(tposition pos, tdirection dir);
    tcolor otherColor(tcolor color);
    tcolor winner();
    int redFood();
    int blackFood();
    void throwError(std::string errMsg);
    void log(std::string logMsg);
};

#endif // WORLD_H
