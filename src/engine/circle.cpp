#include "engine/circle.h"
#include "engine/util.h"
#include "engine/defines.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "engine/defines.h"
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

        check_edge();
    }

    Math::Vector Circle::get_position() {
        return Math::Vector(circle->getPosition().x , circle->getPosition().y);
    }

    void Circle::set_position(const Math::Vector& pos) {
        circle->setPosition(pos.x , pos.y);
    }


    void Circle::check_edge() {

        Math::Vector pos = get_position();

        if(pos.x < 0)
            pos.x = Define::WIDTH;

        else if(pos.x >  Define::WIDTH)
            pos.x = 0;


        if(pos.y < 0)
            pos.y = Define::HEIGHT;

        if(pos.y >  Define::HEIGHT)
            pos.y = 0;

        set_position(pos);
    }

};

