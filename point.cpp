#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
// declaration de la structure
 struct point2f {
    float X;
    float Y;
};
point2f Makep2f(float X, float Y){
    point2f p;
    p.X = X;
    p.Y = Y;
    return p;
}
// fonctions de translation d'un point
point2f translate(const point2f& p, float dX, float dY) {
    point2f image;
    image.X = p.X + dX;
    image.Y = p.Y + dY;
    return image;
}
//mise a echelle

point2f scale( const point2f& p, float sX,float sY){
    point2f result;
    result.X = p.X * sX;
    result.Y = p.Y * sY;
    return result;
}

// fonction de la rotation d'un point
point2f rotate(point2f& p, float angleDegree) {
    point2f Image;
    float rad =( angleDegree * M_PI) / 180;
    Image.X = p.X *cos(rad)- p.Y *sin(rad);
    Image.Y = p.X *sin(rad) + p.Y*cos(rad);
    return Image;
}
std::string ToString(const point2f& p) {
    std::ostringstream oss;
    oss<< "("<<p.X << "," << p.Y << ")";
    return oss.str();
}