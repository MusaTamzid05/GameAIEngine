#ifndef STEERING_FLEE_H
#define STEERING_FLEE_H

#include "physics/steering_output.h"

namespace Engine {
    class Shape;
};

namespace Physics {
    SteeringOutput get_steering_flee(Engine::Shape& object , Math::Vector& dst);
};
#endif
