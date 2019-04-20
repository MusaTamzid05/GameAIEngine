#include "physics/kinematic_seek.h"
#include "engine/defines.h"
#include <iostream>


namespace Physics {

    MotionOutput get_kinematic_flee(Math::Vector& src_pos, Math::Vector& dst_pos) {


        MotionOutput result;
        result.velocity = src_pos - dst_pos;
        result.velocity.normalize();
        result.velocity *= Engine::Define::MAX_SPEED;
        result.rotation = 0;

        return result;
    }
};
