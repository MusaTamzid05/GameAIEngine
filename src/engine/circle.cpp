#include "engine/circle.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

namespace Engine {

    Circle::Circle( int pos_x , int pos_y , int radius):
    m_circle(new sf::CircleShape(radius)){
        m_circle->setFillColor(sf::Color::Blue);
        m_circle->setPosition(pos_x , pos_y);

    }


    void Circle::draw(sf::RenderWindow& window) {
        window.draw(*m_circle);
    }


    void Circle::update() {

    }

};
