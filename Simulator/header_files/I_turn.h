/**
I_turn.h
*/

#ifndef _I_TURN_H
#define _I_TURN_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_turn: public Instruction{
  private:
    // attributes
    tleftright lr;
    tstate z;

    //functions

  public:
    //attributes

    //functions
    void execute(Bug b);
    void parse(string args);
    void turn(tleftright lr, tstate z);
};

#endif
