#include "math/vector.h"
#include <iostream>

int main(int argc , char** argv) {

    Math::Vector vec;
    std::cout << vec.x << " " << vec.y << "\n";

    Math::Vector vec1(5 , 5);

    auto vec2 = vec + vec1;
    std::cout << vec2.x << " " << vec2.y << "\n";

    return 0;
}
