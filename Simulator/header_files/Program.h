/*
 * Program.h
 */

#ifndef _PROGRAM_H
#define _PROGRAM_H

#include <iostream>
#include "Bug.h"


class Program: public Bug{
  private:
    // attributes
    int id;
  public:
    //functions
    Program(std::string filename);
    void step(Bug *b);
};

#endif
