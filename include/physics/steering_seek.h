#ifndef STEERING_SEEK_H
#define STEERING_SEEK_H

#include "physics/steering_output.h"
#include "physics/steering_behavior.h"

namespace Engine {
    class Shape;
};

namespace Physics {

    class SteeringSeek : public SteeringBehavior {
        public:
            SteeringSeek(Physics::Kinematic*  character , Physics::Kinematic*  target);
            SteeringOutput get_steering_output();
    };

    SteeringOutput get_steering_seek(Engine::Shape& object , Math::Vector& dst);
};
#endif
