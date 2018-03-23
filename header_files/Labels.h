/*
* Labels.h
* Gisi Musa
*/

#ifndef LABELS_H
#define LABELS_H
#include "allHeaders.h"

class Labels
{
    public:
        Labels();
        int line_of(string label);
        void add_label(string label, int line);
        void add_goto(string label, int line);
        int resolve_goto(int line);
        void error(string msg);
        virtual ~Labels();
};

#endif // LABELS_H