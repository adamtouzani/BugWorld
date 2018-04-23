/**
I_flip.h
*/

#ifndef _I_FLIP_H
#define _I_FLIP_H

#include <ctime>
#include "Bug.h"
#include "Structs.h"
#include "Instruction.h"
#include "World.h"

using namespace std;

class I_flip: public Instruction{
  private:
    // attributes
    int p;
    tstate x;
    tstate y;
    int seed;

    //functions
    int randomint(){
      srand(time(NULL));
      return rand() % (p - 1);
    }

  public:
    //functions
    I_flip(World*);
    void execute(Bug *b);
    void parse(std::string args);

    void flip(int p, tstate x, tstate y);
};

#endif
