/* 
 * File:   Cell.cpp
 */

#include "../header_files/Cell.h"
#include "../header_files/Bug.h"
#include "../header_files/Exception.h"

using namespace std;

Cell::Cell(char symb){
    switch(symb){
        case '#': 
            //occupant not initialized
            obstructed = true;
            food = 0;
            //marker to be implemented
            homeBlackBug = false;
            homeRedBug = false;
            break;
        case '.':
            //occupant not initialized
            obstructed = false;
            food = 0;
            //marker to be implemented
            homeBlackBug = false;
            homeRedBug = false;
            break;
        case '-':
            //Add code to initialize Bug
            homeBlackBug = true;
            homeRedBug = false;
            //marker to be implemented
            food = 0;
            obstructed = false;
            break;
        case '+':
            //Add code to initialize Bug
            obstructed = false;
            food = 0;
            //marker to be implemented
            homeBlackBug = false;
            homeRedBug = true;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            //occupant not initialized
            obstructed = false;
            food = symb - 48;
            //marker to be implemented
            homeBlackBug = false;
            homeRedBug = false;
            break;
        default:
            throw(Exception("Invalid symbol! Cannot initialize cell!"));
            break;
    }
}

Bug* Cell::getOccupant(){
    return occupant;
}

void Cell::setOccupant(Bug *newBug){
    occupant = newBug;
}

int Cell::getFood(){
    return food;
}

void Cell::setFood(int newFood){
    food = newFood;
}

bool Cell::getObstructed(){
    return obstructed;
}

bool Cell::isBlackHomeArea(){
    return homeBlackBug;
}

bool Cell::isRedHomeArea(){
    return homeRedBug;
}
