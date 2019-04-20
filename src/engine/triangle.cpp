#include "engine/triangle.h"
#include "engine/util.h"
#include "engine/defines.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "engine/defines.h"
#include <iostream>

namespace Engine {

    Triangle::Triangle( int pos_x , int pos_y ):
        Shape() ,
        current_orientation(0.1){
            circle = new sf::CircleShape(10 , Define::POLYGUNS);
            init_attributes(pos_x , pos_y);
    }

    Triangle::~Triangle() {
    }

    void Triangle::create_circle(int radius) {
        circle = new sf::CircleShape(radius , Define::POLYGUNS);
        std::cout << "polygons created.\n";
    }


};

