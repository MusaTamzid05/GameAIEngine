#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

#include "engine/circle.h"

namespace Engine {

    class Game {

        public:

            Game(int width = 640 , int height = 480 , const std::string& title = "Game");
            virtual ~Game() {}

            void run();


        private:

            void update(sf::Time elasped_time);
            void render();
            void handle_event();

            static sf::Time time_per_frame;


            sf::RenderWindow m_window;

            Circle circle;

    };
};


#endif
