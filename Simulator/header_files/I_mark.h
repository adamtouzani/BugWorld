/**
I_mark.h
*/

#ifndef _I_MARK_H
#define _I_MARK_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_mark: public Instruction{
  private:
    // attributes
    int m;
    tstate z;
  public:
    //functions
    I_mark(World*);
    void execute(Bug*);
    void parse(string args);
};

#endif
