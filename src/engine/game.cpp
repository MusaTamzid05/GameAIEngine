#include "engine/game.h"
#include <SFML/Graphics.hpp>

#include "engine/following_circle.h"
#include "engine/mouse.h"

namespace Engine {

    sf::Time Game::time_per_frame = sf::seconds( 1.0f / 60.0f );

    Game::Game(int width  , int height  , const std::string& title ):
    window(sf::VideoMode(width , height) , title){

        Mouse*  mouse = new Mouse(&window);
        entities.push_back(new FollowingCirle(mouse));
        entities.push_back(mouse);
        
    }

    Game::~Game() {

        for(auto entity : entities)
            delete entity;
    }

    void Game::run() {

        sf::Clock clock;
        sf::Time time_since_last_update = sf::Time::Zero;

        while(window.isOpen()) {

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

        window.clear();

        for(auto entity : entities)
            entity->draw(window);

        window.display();

    }

    void Game::update(sf::Time elasped_time) {

        for(auto entity : entities)
            entity->update();

    }

    void Game::handle_event() {

        sf::Event event;

        while(window.pollEvent(event)) {

            switch(event.type) {

                case sf::Event::Closed:
                    window.close();
                    break;
            }
        }
    }


}
