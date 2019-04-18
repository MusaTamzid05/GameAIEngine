#include "math/vector.h"

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
        return Vector(vec.x , vec.y);
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

    std::ostream& Vector::operator<<(std::ostream& out) {
        out << "x : " << x << " y :" << y << "\n";
        return out;
    }

};
