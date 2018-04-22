#ifndef _I_DIRECTION_H
#define _I_DIRECTION_H

#include "../header_files/Bug.h"
#include "../header_files/Structs.h"
#include "../header_files/Instruction.h"

using namespace std;

class I_direction: public Instruction{
private:
  tdirection d;
  tstate x;
  tstate y;
public:
  void execute(Bug b);
  void parse(string args);

  void direction(tdirection dir, tstate dir_x, tstate dir_y);
};

#endif
