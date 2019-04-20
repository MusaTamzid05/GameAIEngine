#ifndef STEERING_OUTPUT_H
#define STEERING_OUTPUT_H

#include "math/vector.h"

namespace Physics {

    struct SteeringOutput {

        SteeringOutput() {}
        SteeringOutput(const Math::Vector& linear, float angular);
        virtual ~SteeringOutput() {}

        Math::Vector linear;
        float angular;
    };
};

#endif
