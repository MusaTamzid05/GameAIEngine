#include "physics/steering_flee.h"
#include "engine/shape.h"
#include "engine/defines.h"

namespace Physics {


    SteeringFlee::SteeringFlee(Physics::Kinematic*  character , Physics::Kinematic*  target):SteeringBehavior(character , target) {

    }

    SteeringOutput SteeringFlee::get_steering_output() {

        Physics::SteeringOutput result;
        result.linear = character->position - target->position;
        result.linear.normalize();
        result.linear *= Engine::Define::MAX_ACCELERATION;
        result.angular = 0;
        return result;
    }


};
