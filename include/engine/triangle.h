#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "engine/shape.h"
#include "math/vector.h"


namespace sf {
    class CircleShape;
};


// To-DO : This is repetative code from circle,need to fixed that !!


namespace Engine {

    class Triangle : public Shape {

        public:

            Triangle( int pos_x = 0, int pos_y = 0);
            virtual ~Triangle();
            void create_circle(int radius);

            float get_orientation() { return current_orientation; }
            float set_orientation(float orientation) { current_orientation = orientation; }

        protected:

            float current_orientation;


    };
};
#endif
