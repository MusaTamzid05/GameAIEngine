#ifndef KINEMATIC_SEEK_H
#define KINEMATIC_SEEK_H

#include "motion_output.h"

namespace Physics {
    MotionOutput get_kinematic_flee(Math::Vector& src_pos, Math::Vector& dst_pos);

};
#endif
