#include "physics/kinematic_arrive.h"
#include "engine/defines.h"
#include <iostream>

namespace Physics {

    MotionOutput get_kinematic_arrive(Math::Vector& src_pos, Math::Vector& dst_pos) {

        float time_to_target = 0.25;

        MotionOutput result;
        result.velocity = dst_pos - src_pos;

        if(result.velocity.length() < Engine::Define::RADIUS) {
            result.velocity = 0.0;
            result.rotation = 0.0;
            return result;
        }

        result.velocity /= time_to_target;
        
        if(result.velocity.length() > Engine::Define::MAX_SPEED) {
            result.velocity.normalize();
            result.velocity *= Engine::Define::MAX_SPEED;
        }

        result.rotation = 0;

        return result;
    }
};
