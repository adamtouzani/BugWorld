#ifndef _MARKER_H
#define _MARKER_H

#include "attribute.h"

class Marker{
private:
  // Despite the implementation prototype suggests int for bits
  // it is more meaningful to use bool in order to represent a bit.
  // The return types of function prototypes are also bool.
  bool red_bits[6];
  bool black_bits[6];
public:
  Marker();
  void set_marker(tmark, tcolor);
  void clear_mark(tmark, tcolor);
  bool check_mark(tmark, tcolor);
  bool check_other_mark(tmark, tcolor);
};

#endif
