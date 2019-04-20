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

        protected:

            float current_orientation;


    };
};
#endif
