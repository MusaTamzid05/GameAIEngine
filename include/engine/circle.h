#ifndef CIRCLE_H
#define CIRCLE_H

#include "engine/entity.h"
#include <memory>


namespace sf {
    class CircleShape;
};

namespace Engine {

    class Circle : public Entity {

        public:

            Circle( int pos_x = 100 , int pos_y = 100 , int radius = 10);
            virtual ~Circle() {}

            virtual void draw(sf::RenderWindow& window);
            virtual void update();

        protected:

            std::shared_ptr<sf::CircleShape> m_circle;

    };
};
#endif
