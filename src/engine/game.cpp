#include "engine/game.h"
#include <SFML/Graphics.hpp>

#include "engine/circle.h"

namespace Engine {

    sf::Time Game::time_per_frame = sf::seconds( 1.0f / 60.0f );

    Game::Game(int width  , int height  , const std::string& title ):
    m_window(sf::VideoMode(width , height) , title , sf::Style::Close){

        m_entities.push_back(std::make_shared<Circle>(100 , 100));
        m_entities.push_back(std::make_shared<Circle>(150 , 100));
        


    }

    void Game::run() {

        sf::Clock clock;
        sf::Time time_since_last_update = sf::Time::Zero;

        while(m_window.isOpen()) {

            sf::Time elasped_time = clock.restart();
            time_since_last_update += elasped_time;

            while(time_since_last_update > time_per_frame) {
                time_since_last_update -= time_per_frame;
                handle_event();
                update(time_per_frame);
            }
            render();
        }
    }

    void Game::render() {

        m_window.clear();

        for(auto entity : m_entities)
            entity->draw(m_window);

        m_window.display();
    }

    void Game::update(sf::Time elasped_time) {
        for(auto entity : m_entities)
            entity->update();

    }

    void Game::handle_event() {

        sf::Event event;

        while(m_window.pollEvent(event)) {

            switch(event.type) {

                case sf::Event::Closed:
                    m_window.close();
                    break;
            }
        }
    }


}
