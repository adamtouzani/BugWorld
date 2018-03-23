/*
* l_default.h
* Gisi Musa
*/

#ifndef I_DEFAULT_H
#define I_DEFAULT_H

#include "../header_files/Instruction.h"
using namespace std;

class I_default: public Instruction
{
    public:
        I_default();
        int parse(string args, int line);
        string read();
        virtual ~I_default();

};

#endif // L_DEFAULT_H