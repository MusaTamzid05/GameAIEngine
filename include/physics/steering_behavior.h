#ifndef STEERING_BEHAVIOR_H
#define STEERING_BEHAVIOR_H

#include "physics/steering_output.h"
#include "physics/kinematic.h"

namespace Physics {

    class SteeringBehavior {
        public:
            SteeringBehavior(Physics::Kinematic* character , Physics::Kinematic* target);
            virtual SteeringOutput get_steering_output() = 0;

        protected:
            Physics::Kinematic* character;
            Physics::Kinematic* target;


    };

};

#endif
