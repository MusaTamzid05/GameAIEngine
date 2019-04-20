#ifndef STEERING_SEEK_H
#define STEERING_SEEK_H

#include "physics/steering_output.h"

namespace Engine {
    class Shape;
};

namespace Physics {
    SteeringOutput get_steering_seek(Engine::Shape& object , Math::Vector& dst);
};
#endif
