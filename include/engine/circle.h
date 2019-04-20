#ifndef CIRCLE_H
#define CIRCLE_H

#include "engine/shape.h"
#include "math/vector.h"


namespace sf {
    class CircleShape;
};

namespace Engine {

    class Circle : public Shape {

        public:

            Circle( int pos_x = 0, int pos_y = 0, int radius = 10);
            virtual ~Circle();


        protected:

    };
};
#endif
