#ifndef HEADER_H
#define HEADER_H
#include <Eigen/Core>

struct Point
{
  int x;
  int y;
  /* data */
};



/**
 * @brief Transformer
 * 
 */
class Transformer
{
public:
  void apply(Point o, int theta);
private:
};

#endif // HEADER_H