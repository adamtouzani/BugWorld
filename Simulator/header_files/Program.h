/*
 * Program.h
 */

#ifndef _PROGRAM_H
#define _PROGRAM_H

#include <iostream>
#include "Bug.h"
#include "World.h"


class Program{
  private:
    // attributes
    World *world;
    int id;
  public:
    //functions
    Program(std::string, World*);
    void step(Bug *b);
};

#endif
