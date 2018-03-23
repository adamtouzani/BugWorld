#ifndef I_MARK_H
#define I_MARK_H

#include "../header_files/Instruction.h"
using namespace stdI

class I_mark: public Instruction
{
    public:
        I_mark();
        int parse(string args, int line);
        string read();
        virtual ~I_mark();

    private:
        tmark mark;
};

#endif // I_MARK_H
