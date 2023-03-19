#include <iostream>
#include "header.h"


Transformer::Transformer(Point origin, Angle theta)
{
  std::cout << "Initialising Transformer Class!" << std::endl;
  v_origin << origin.x, origin.y;
  m_rotation = this->getRotationMatrix(-theta);
}

Point Transformer::apply(Point p2)
{
  Vector2d v_p2(p2.x,p2.y);
  Vector2d v_p1 = m_rotation*v_p2 + v_origin;
  Point p1 = {v_p1(0), v_p1(1)};
  return p1;
}

Matrix2d Transformer::getRotationMatrix(Angle theta)
{
  Matrix2d r(2,2);
  r(0,0) = cos(theta);
  r(0,1) = sin(theta);
  r(1,0) = -sin(theta);
  r(1,1) = cos(theta);
  return r;
}
