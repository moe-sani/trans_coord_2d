#include "header.h"
#include <iostream>
#include <iostream>
#include <Eigen/Dense>
using Eigen::MatrixXd;

int main()
{
  std::cout << "Welcome to Cmake CPP Project!" << std::endl;
  Transformer myTransformer;
  Point a ={0,0};
  myTransformer.apply(a, 5);
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
  return 0;
}