#ifndef HEADER_H
#define HEADER_H
#include <Eigen/Core>

using Eigen::Matrix2d;
using Eigen::Vector2d;

typedef struct
{
  double x;
  double y;
  /* data */
} Point;

typedef double Angle;

/**
 * @brief Transformer
 * 
 */
class Transformer
{
public:
  Transformer(Point p_origin, Angle a_theta );
  Point apply(Point p2);

private:
  Vector2d v_origin;
  Matrix2d m_rotation;
  Matrix2d getRotationMatrix(Angle theta);
};

#endif // HEADER_H