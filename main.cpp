#include "header.h"
#include <iostream>
#include <iostream>
#include <Eigen/Dense>
// using Eigen::MatrixXd;

int main()
{
  std::cout << "Welcome to Cmake CPP Project!" << std::endl;
  Point origin ={2,2};
  Angle angle = 0;
  Point p2 = {1,1};
  Transformer myTransformer(origin,angle);
  Point p1 = myTransformer.apply(p2);

  std::cout << p1.x << p1.y << std::endl;
  return 0;
}