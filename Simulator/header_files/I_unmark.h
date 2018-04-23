/**
I_unmark.h
*/

#ifndef _I_UNMARK_H
#define _I_UNMARK_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_unmark: public Instruction{
  private:
    // attributes
    int m;
    tstate z;

    //functions

  public:
    //functions
    I_unmark(World*);
    void execute(Bug b);
    void parse(string args);
    void unmark(int m, tsate z);
};

#endif
