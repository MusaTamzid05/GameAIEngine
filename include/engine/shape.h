#ifndef SHAPE_H
#define SHAPE_H


#include "engine/entity.h"
#include "math/vector.h"


namespace sf {
    class CircleShape;
};

namespace Engine {

    class Shape : public Entity {

        public:

            Shape();
            virtual ~Shape();

            virtual void draw(sf::RenderWindow& window);
            virtual void update();

            Math::Vector get_position();
            void set_position(const Math::Vector& pos);

            void set_velocity(const Math::Vector& velocity) { this->velocity = velocity; }
            Math::Vector get_velocity() { return velocity; }

        protected:


            Math::Vector velocity;
            sf::CircleShape* circle;
            void check_edge();

            virtual void init_attributes(int pos_x , int pos_y);

    };
};

#endif
