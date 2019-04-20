#ifndef STEERING_SEEK_TRIANGLE_H
#define STEERING_SEEK_TRIANGLE_H

#include "engine/steering_triangle.h"

namespace Engine {

    class SteeringFleeTriangle : public SteeringTriangle {

        public:
            SteeringFleeTriangle(Mouse* mouse);
            virtual ~SteeringFleeTriangle();
            void update();

    };

};

#endif
