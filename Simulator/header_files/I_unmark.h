/**
I_unmark.h
*/

#ifndef _I_UNMARK_H
#define _I_UNMARK_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_unmark: public Instruction{
  private:
    // attributes
    int m;
    tstate z;

    //functions

  public:
    //attributes

    //functions
    void execute(Bug b);
    void parse(string args);
    void unmark(int m, tsate z);
};

#endif
