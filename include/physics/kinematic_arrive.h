#ifndef KINAMATIC_ARRIVE_H
#define KINAMATIC_ARRIVE_H

#include "motion_output.h"

namespace Physics {
    MotionOutput get_kinematic_arrive(Math::Vector& src_pos, Math::Vector& dst_pos);
};
#endif
