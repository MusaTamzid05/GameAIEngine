#include "physics/steering_seek.h"
#include "engine/shape.h"
#include "engine/defines.h"

namespace Physics {


    SteeringSeek::SteeringSeek(Physics::Kinematic*  character , Physics::Kinematic*  target):SteeringBehavior(character , target) {

    }

    SteeringOutput SteeringSeek::get_steering_output() {

        Physics::SteeringOutput result;
        result.linear = target->position - character->position;
        result.linear.normalize();
        result.linear *= Engine::Define::MAX_ACCELERATION;
        result.angular = 0;
        return result;
    }

};


