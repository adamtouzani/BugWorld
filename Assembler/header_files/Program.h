/*
* Program.h
* Gisi Musa
*/

#ifndef PROGRAM_H
#define PROGRAM_H
#include "allHeaders.h"

class Program
{
    public:
        Program(string filename);
        void error(string msg);
        void  process();
        void export();
        virtual ~Program();

    private:
        int line = 0;
};

#endif // PROGRAM_H