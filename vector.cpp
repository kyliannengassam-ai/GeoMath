#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "vector.h"
//cree un vecteur a partir des cordonnees
vector2f Makev2f(float X, float Y){
    vector2f v;
    v.X = X;
    v.Y = Y;
    return v;
}
//cree un vecteur a partir de deux points
 vector2f Makev2f(const point2f& a, point2f& b){
    vector2f v;
    v.X = b.X - a.X;
    v.Y = b.Y - a.Y;
    return v;
 }
 // Additon deux vecteurs
 vector2f Add(const vector2f& a, const vector2f& b) {
    vector2f v;
    v.X = a.X + b.X;
    v.Y = a.Y + b.Y;
    return v;
 }
 // soustraire deux vecteurs
 vector2f Sub(const vector2f& a, const vector2f& b){
    vector2f v;
    v.X = a.X - b.X;
    v.Y = a.Y - b.Y;
    return v;
 }
 // mise en echelle d'un vecteur par un scalaire
 vector2f scale(const vector2f& v, float scalar){
    vector2f vect;
    vect.X = v.X * scalar;
    vect.Y = v.Y * scalar;
    return vect;
 }
 //produit scalaire
 float Dot(const vector2f& a, const vector2f& b){
    float v;
    v = a.X * b.X + a.Y * b.Y;
    return v;
 }
 // la norme d'un vecteur
 float Length(const vector2f& v){
    float result;
    result = std::sqrt(v.X * v.X + v.Y * v.Y );
    return result;
 }
 // normalisation d'un vecteur
 vector2f Normalize(const vector2f& v){
    float len = Length(v);
    vector2f vect;
    if(len != 0.0f){
        vect.X = v.X / len;
        vect.Y = v.Y / len;
    }else
    {
        vect.X = 0;
        vect.Y = 0;
    }
    return vect;
    
 }
 // l'interpolation lineaire
 vector2f Lerp(const vector2f& a, const vector2f& b, float t){
    vector2f vect;
    vector2f vact =  {0,0};
    if(t<0 || t> 1) return vact;
    vect.X = a.X + t * (b.X - a.X);
    vect.Y = a.Y + t * (b.Y - a.Y);
    return vect;
 }
 // le determinant de deux vecteurs
 float Determinant(const vector2f& a, const vector2f& b){
    float det;
    det = (a.X * b.Y) - (a.Y * b.X);
    return det;

 }
// conversion en texte 
 std::string ToString(const vector2f& p){
    std::ostringstream oss;
    oss<< "("<<p.X << "," << p.Y << ")";
    return oss.str();

 }
 