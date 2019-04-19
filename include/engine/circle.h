#ifndef CIRCLE_H
#define CIRCLE_H

#include "engine/entity.h"
#include "math/vector.h"


namespace sf {
    class CircleShape;
};

namespace Engine {

    class Circle : public Entity {

        public:

            Circle( int pos_x = 0, int pos_y = 0, int radius = 10);
            virtual ~Circle();

            virtual void draw(sf::RenderWindow& window);
            virtual void update();

            Math::Vector get_position();
            void set_position(const Math::Vector& pos);

        protected:

            sf::CircleShape* circle;

    };
};
#endif
