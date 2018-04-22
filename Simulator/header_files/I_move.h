#ifndef _I_MOVE_H
#define _I_MOVE_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_move: public Instruction{
private:
  tstate x;
  tstate y;
public:
  void execute(Bug b);
  void parse(string args);
  void move(tstate x, tstate y);
};

#endif
