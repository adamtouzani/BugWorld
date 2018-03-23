#ifndef I_UNMARK_H
#define I_UNMARK_H

#include "../header_files/Instruction.h"
using namespace std;

class I_unmark: public Instruction
{
    public:
       I_unmark();
        int parse(string args, int line);
        string read();
        virtual ~I_unmark();

    private:
        tmark mark;
};

#endif //I_UNMARK_H
