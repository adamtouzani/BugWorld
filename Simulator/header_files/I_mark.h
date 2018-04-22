/**
I_mark.h
*/

#ifndef _I_MARK_H
#define _I_MARK_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_mark: public Instruction{
  private:
    // attributes
    int m;
    tstate z;
  public:
    //functions
    void execute(Bug b);
    void parse(string args);
};

#endif
