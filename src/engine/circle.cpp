#include "engine/circle.h"
#include "engine/util.h"
#include "engine/defines.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include <iostream>

namespace Engine {

    Circle::Circle( int pos_x , int pos_y , int radius):
    circle(new sf::CircleShape(radius)){

        if(pos_x == 0 && pos_y == 0) 
            circle->setPosition(Util::generate_number_between(0 , Define::WIDTH), Util::generate_number_between(0 ,Define::HEIGHT));
        else
            circle->setPosition(pos_x , pos_y);

        circle->setOutlineColor(sf::Color(0.0 , 0.0 , 0.0));
        circle->setOutlineThickness(1);
        circle->setFillColor(
                sf::Color(
                    Util::generate_number_between(1 , 255),
                    Util::generate_number_between(1 , 255),
                    Util::generate_number_between(1 , 255)
                    )
                );

    }

    Circle::~Circle() {
        delete circle;
    }

    void Circle::draw(sf::RenderWindow& window) {
        window.draw(*circle);
    }


    void Circle::update() {

    }

    Math::Vector Circle::get_position() {
        return Math::Vector(circle->getPosition().x , circle->getPosition().y);
    }

    void Circle::set_position(const Math::Vector& pos) {
        circle->setPosition(pos.x , pos.y);
    }

};
