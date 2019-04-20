#ifndef STEERING_SEEK_TRIANGLE_H
#define STEERING_SEEK_TRIANGLE_H

#include "engine/steering_triangle.h"

namespace Engine {

    class SteeringSeekTriangle : public SteeringTriangle {

        public:
            SteeringSeekTriangle(Mouse* mouse);
            virtual ~SteeringSeekTriangle();
            void update();

    };
};
#endif
