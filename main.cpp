#include "transformer.h"
#include <iostream>

int main()
{
  std::cout << "Welcome to 2D Coordinate Transform Project!" << std::endl;
  Point origin ={2,0};
  Angle angle = 0.78;
  Point p2 = { 0, 1};
  Transformer myTransformer(origin,angle);
  Point p1 = myTransformer.apply(p2);

  std::cout << "p2=[" << p1.x <<"," << p1.y << "]" << std::endl;
  return 0;
}