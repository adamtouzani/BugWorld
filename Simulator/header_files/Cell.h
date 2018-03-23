/* 
 * File:   Cell.h
*/

#ifndef CELL_H
#define CELL_H

#include "Structs.h"
#include "Marker.h"
#include "Bug.h"

class Cell{
private:
    Bug occupant;
    bool obstructed;
    int food;
    Marker mark;
    bool homeBlackBug;
    bool homeRedBug;
public:
    Cell();
    Cell(char symb);
    ~Cell();
    Bug getOccupant();
    void setOccupant(Bug newBug);
    int getFood();
    void setFood(int newFood);
    bool getObstructed();
    bool isBlackHomeArea();
    bool isRedHomeArea();
};

#endif /* CELL_H */

