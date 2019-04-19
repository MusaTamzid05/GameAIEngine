#include "engine/mouse.h"
#include <SFML/Window/Mouse.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <iostream>

namespace Engine {

    Mouse::Mouse(sf::RenderWindow* window):
    m_window(window){
    }


    Mouse::~Mouse() {

    }
    void Mouse::update() {

        pos.x = sf::Mouse::getPosition(*m_window).x;
        pos.y = sf::Mouse::getPosition(*m_window).y;

        std::cout << pos << "\n";

    }

    void Mouse::draw(sf::RenderWindow& window) {

    }


    Math::Vector Mouse::get_position() {
        return pos;
    }
};
