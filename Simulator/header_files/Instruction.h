#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "../header_files/World.h"


using namespace std;

class Instruction
{
    public:
        Instruction(World*);
        virtual void parse(string) = 0;
        virtual void execute(Bug*) = 0;

    protected:
        World *world;
};

#endif // INSTRUCTION_H
