#ifndef _I_MOVE_H
#define _I_MOVE_H

#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_move: public Instruction{
private:
  tstate x;
  tstate y;
public:
  I_move(World*);
  void execute(Bug *b);
  void parse(string args);
  void move(tstate x, tstate y);
};

#endif
