#ifndef I_FLIP_H
#define I_FLIP_H

#include "../header_files/Instruction.h"
using namespace std;

class I_flip: public Instruction
{
    public:
        I_flip();
        int parse(string args, int line);
        string read();
        virtual ~I_flip();

    private:
        int p;
        string on_fail;
};

#endif // I_FLIP_H
