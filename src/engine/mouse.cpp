#include "engine/mouse.h"
#include <SFML/Window/Mouse.hpp>
#include <iostream>

namespace Engine {


    Mouse::Mouse() {

    }
    void Mouse::update() {

        pos.x = sf::Mouse::getPosition().x;
        pos.y = sf::Mouse::getPosition().y;

        std::cout << pos << "\n";

    }

    void Mouse::draw(sf::RenderWindow& window) {

    }


    Math::Vector Mouse::get_position() {
        return pos;
    }
};
