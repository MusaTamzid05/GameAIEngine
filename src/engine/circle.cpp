#include "engine/circle.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

namespace Engine {

    Circle::Circle( int pos_x , int pos_y , int radius):
    circle(new sf::CircleShape(radius)){
        circle->setFillColor(sf::Color::Blue);
        circle->setPosition(pos_x , pos_y);

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
