#ifndef MOUSE_H
#define MOUSE_H

#include <memory>
#include "engine/entity.h"
#include "math/vector.h"

namespace sf {
    class RenderWindow;
};

namespace Engine {

    class Mouse : public Entity {

        public:

            Mouse();
            virtual ~Mouse() {}


            void update();
            void draw(sf::RenderWindow& window);

            Math::Vector get_position();


        private:
            Math::Vector pos;
            std::shared_ptr<sf::RenderWindow> window;


    };

};
#endif
