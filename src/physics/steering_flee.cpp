#include "physics/steering_flee.h"
#include "engine/shape.h"
#include "engine/defines.h"

namespace Physics {

    SteeringOutput get_steering_flee(Engine::Shape& object , Math::Vector& dst) {

        SteeringOutput result;
        result.linear =  object.get_position() - dst;
        result.linear.normalize();
        result.linear *= Engine::Define::MAX_ACCELERATION;
        result.angular = 0;

        return result;

    }
};
