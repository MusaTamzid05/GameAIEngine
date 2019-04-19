#include "math/vector.h"
#include <cmath>
#include <limits>
#include <iostream>

namespace Math {

    Vector::Vector(const float x , const float y):
        x(x),
        y(y) {}


    Vector Vector::operator+(const Vector& vec) {

        Vector new_vec;
        new_vec.x  = x + vec.x;
        new_vec.y  = y + vec.y;

        return new_vec;
    }


    Vector Vector::operator-(const Vector& vec) {

        Vector new_vec;
        new_vec.x  = x - vec.x;
        new_vec.y  = y - vec.y;

        return new_vec;
    }


    Vector Vector::operator*(const Vector& vec) {

        Vector new_vec;
        new_vec.x  = x * vec.x;
        new_vec.y  = y *  vec.y;

        return new_vec;
    }


    Vector Vector::operator/(const Vector& vec) {

        Vector new_vec;
        new_vec.x  = x / vec.x;
        new_vec.y  = y / vec.y;
        return new_vec;
    }

    
    Vector Vector::operator=(const Vector& vec) {

        x = vec.x;
        y = vec.y;

        return *this;
    }

    Vector Vector::operator+(float value) {

        Vector vec;

        vec.x = x + value;
        vec.y = y + value;

        return vec;
    }

    Vector Vector::operator-(float value) {

        Vector vec;

        vec.x = x - value;
        vec.y = y - value;

        return vec;
    }


    Vector Vector::operator*(float value) {

        Vector vec;

        vec.x = x * value;
        vec.y = y * value;

        return vec;
    }


    Vector Vector::operator/(float value) {

        Vector vec;

        vec.x = x / value;
        vec.y = y / value;

        return vec;
    }

    std::ostream& operator<<(std::ostream& out , const Vector& vec) {
        out << "x : " << vec.x << " y :" << vec.y;
        return out;
    }




    Vector Vector::operator+=(const Vector& vec) {

        x +=  vec.x;
        y +=  vec.y;

        return *this;
    }


    Vector Vector::operator-=(const Vector& vec) {

        x  -=  vec.x;
        y  -=  vec.y;

        return *this;
    }


    Vector Vector::operator*=(const Vector& vec) {

        x  *=  vec.x;
        y  *=  vec.y;

        return *this;
    }


    Vector Vector::operator/=(const Vector& vec) {

        x  /=  vec.x;
        y  /=  vec.y;

        return *this;
    }

    

    Vector Vector::operator+=(float value) {

        x  +=  value;
        y  +=  value;

        return *this;
    }

    Vector Vector::operator-=(float value) {

        x  -=  value;
        y  -=  value;

        return *this;
    }


    Vector Vector::operator*=(float value) {

        x  *=  value;
        y  *=  value;

        return *this;
    }


    Vector Vector::operator/=(float value) {

        x  /=  value;
        y  /=  value;

        return *this;
    }

    float Vector::length() {
        return sqrt(x * x + y * y);
    }

    float Vector::normalize() {

        float vector_length = length();

        if(vector_length > std::numeric_limits<double>::epsilon()) {
            this->x /= vector_length;
            this->y /= vector_length;
        }
    }


};
