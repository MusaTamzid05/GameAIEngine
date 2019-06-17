#ifndef STEERING_FLEE_H
#define STEERING_FLEE_H

#include "physics/steering_output.h"
#include "physics/steering_behavior.h"

namespace Engine {
    class Shape;
};

namespace Physics {

    class SteeringFlee : public SteeringBehavior {
        public:
            SteeringFlee(Physics::Kinematic*  character , Physics::Kinematic*  target);
            SteeringOutput get_steering_output();
    };

};
#endif
