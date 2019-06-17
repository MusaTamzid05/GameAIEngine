#include "physics/steering_behavior.h"

namespace Physics {

    SteeringBehavior::SteeringBehavior(Physics::Kinematic*  character , Physics::Kinematic*  target):
        character(character),
        target(target) {}

};
