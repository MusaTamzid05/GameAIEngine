#ifndef STEERING_TRIANGLE_H
#define STEERING_TRIANGLE_H

#include "engine/triangle.h"
#include "physics/kinematic.h"

namespace Engine {

    class Mouse;

    class SteeringTriangle : public Triangle {

        public:
            SteeringTriangle(Mouse* mouse);
            virtual ~SteeringTriangle();


        protected:

            Mouse*  mouse;
            Physics::Kinematic charecter;
            Physics::Kinematic target;
            Physics::SteeringOutput result;

            void update_position();

    };
};


#endif
