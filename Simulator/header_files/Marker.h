#ifndef _MARKER_H
#define _MARKER_H

#include "../header_files/Structs.h"

class Marker{
private:
  int bits[12];
public:
  Marker();
  ~Marker();
  
  void set_marker(tmark, tcolor);
  void clear_marker(tmark, tcolor);
  bool check_marker(tmark, tcolor);
  bool check_other_marker(tmark, tcolor);
};

#endif
