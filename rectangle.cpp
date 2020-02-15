#include "rectangle.hpp"

RECTANGLE::RECTANGLE(){
  LENGTH__ = 0;
  WIDTH__ = 0;
}

void RECTANGLE::SET_LENGTH(double length){
  LENGTH__ = length;
}

void RECTANGLE::SET_WIDTH(double width){
  WIDTH__ = width;
}

double RECTANGLE::GET_LENGTH(){
  return LENGTH__;
}

double RECTANGLE::GET_WIDTH(){
  return WIDTH__;
}
