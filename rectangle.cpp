#include "rectangle.hpp"

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
