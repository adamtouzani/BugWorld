/**
I_turn.h
*/

#ifndef _I_TURN_H
#define _I_TURN_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_turn: public Instruction{
  private:
    // attributes
    tleftright lr;
    tstate z;

    //functions

  public:
    //functions
    I_turn(World*);
    void execute(Bug b);
    void parse(string args);
    void turn(tleftright lr, tstate z);
};

#endif
