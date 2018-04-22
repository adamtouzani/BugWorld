/**
I_drop.h
*/

#ifndef _I_DROP_H
#define _I_DROP_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_drop: public Instruction {
  private:
    // attributes
    tstate z;

    //functions

  public:
    //attributes

    //functions
    void execute(Bug b);
    void parse(string args);

    void drop(tstate z);
};

#endif
