#include "engine/circle.h"
#include "engine/util.h"
#include "engine/defines.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "engine/defines.h"
#include <iostream>

namespace Engine {

    Circle::Circle( int pos_x , int pos_y , int radius):
        Shape(){
        

            circle = new sf::CircleShape(radius);
            init_attributes(pos_x , pos_y);
    }

    Circle::~Circle() {
    }


};

