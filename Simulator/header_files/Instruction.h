#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "../header_files/World.h"


using namespace std;

class Instruction
{
    public:
        Instruction(World*);
        virtual void parse(string, int);
        virtual void execute(Bug);
        virtual ~Instruction();

    private:
        World *w;
};

#endif // INSTRUCTION_H
