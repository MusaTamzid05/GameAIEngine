#ifndef KINEMATIC_WANDER_H
#define KINEMATIC_WANDER_H


#include "physics/motion_output.h"


namespace Physics {
    MotionOutput get_kinematic_wander(Math::Vector& src_pos , float& current_orientation);
};


#endif
