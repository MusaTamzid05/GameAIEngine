#include "engine/shape.h"
#include "engine/util.h"
#include "engine/defines.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "engine/defines.h"
#include <iostream>

namespace Engine {

    Shape::Shape(){
    }

    Shape::~Shape() {
        delete circle;
    }


    void Shape::init_attributes(int pos_x , int pos_y) {

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

    void Shape::draw(sf::RenderWindow& window) {
        window.draw(*circle);
    }


    void Shape::update() {

        check_edge();
    }

    Math::Vector Shape::get_position() {
        return Math::Vector(circle->getPosition().x , circle->getPosition().y);
    }

    void Shape::set_position(const Math::Vector& pos) {
        circle->setPosition(pos.x , pos.y);
    }


    void Shape::check_edge() {

        Math::Vector pos = get_position();

        if(pos.x < 0)
            pos.x = 0;

        else if(pos.x >=  Define::WIDTH)
            pos.x = Define::WIDTH - Define::BORDER_PADDING;


        if(pos.y < 0)
            pos.y = 0;

        else if(pos.y >=  Define::HEIGHT)
            pos.y = Define::HEIGHT - Define::BORDER_PADDING;

        set_position(pos);
    }

};

