#endif VECTOR_H
#define VECTOR_H

#include <string>
#include <cmath>
// declaration des structure 
struct vector2f
{
    float X;
    float Y;
};
 struct point2f
 {
    float X;
    float Y;
 };

 // declaraction des fonctions
vector2f Makev2f(float X, float Y);
 vector2f Makev2f(const point2f& a, point2f& b);
 vector2f Add(const vector2f& a, const vector2f& b) ;
 vector2f Sub(const vector2f& a, const vector2f& b);
 vector2f scale(const vector2f& v, float scalar);
 float Dot(const vector2f& a, const vector2f& b);
 float Length(const vector2f& v);
 vector2f Normalize(const vector2f& v);
 vector2f Lerp(const vector2f& a, const vector2f& b, float t);
 float Determinant(const vector2f& a, const vector2f& b);

 std::string ToString(const vector2f& p);
 