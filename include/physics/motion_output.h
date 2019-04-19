#ifndef MOTION_OUTPUT_H
#define MOTION_OUTPUT_H

#include "math/vector.h"

namespace Physics {

    struct MotionOutput {

        MotionOutput() {}
        MotionOutput(const Math::Vector& velocity , float rotation);

        Math::Vector velocity;
        float rotation;
    };
};
#endif
