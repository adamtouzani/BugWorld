/**
I_drop.h
*/

#ifndef _I_DROP_H
#define _I_DROP_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_drop: public Instruction {
  private:
    // attributes
    tstate z;

    //functions

  public:
    I_drop(World*);
    //functions
    void execute(Bug *b);
    void parse(string args);

    void drop(tstate z);
};

#endif
