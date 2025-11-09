#endif POINT_H
#define POINT_H

#include <string>
#include "vector.h"

struct point2f {
    float X;
    float Y;
};
point2f Makep2f(float X, float Y);
point2f Makep2f(const point2f& p, const vector2f& v);
point2f translate(const point2f& p, float dX, float dY);
point2f scale(const point2f& p, float sX, float sY);
point2f rotate(const point2f& p, float angleDegree);


std::string ToString(const point2f& p);
 