/* 
 * File:   Structs.h
 */

#ifndef STRUCTS_H
#define STRUCTS_H

struct tcolor{
    int color; //red = 0, black = 1
    tcolor(int x):color(x){};
    tcolor(bool x){
      if(x)
        color = 1;
      else
        color = 0;
    };
};

struct tdirection{
    int direction; //direction in [0,5]
};

struct tsensedir{
    int sensedir; //sensedir in [0,3]
};

struct tleftright{
    int leftright; //left = 0, right = 1
};

struct tmark{
    int mark; //mark in [0,5]
};

struct tstate{
    int state;
};

struct tcondition{
    int condition;
};

struct tposition{
    int posX;
    int posY;
    tposition(int x, int y):posX(x), posY(y){};
};

#endif /* STRUCTS_H */

