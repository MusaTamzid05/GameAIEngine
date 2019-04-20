#ifndef STEERING_TRIANGLE_H
#define STEERING_TRIANGLE_H

#include "engine/triangle.h"

namespace Engine {

    class Mouse;

    class SteeringTriangle : public Triangle {

        public:
            SteeringTriangle(Mouse* mouse);
            virtual ~SteeringTriangle();


        protected:

            Mouse*  mouse;

    };
};


#endif
