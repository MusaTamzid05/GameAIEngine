#include "physics/kinematic_wander.h"
#include "physics/kinematic_seek.h"
#include "engine/util.h"
#include "math/vector.h"

namespace Physics {
    MotionOutput get_kinematic_wander(Math::Vector& src_pos , float& current_orientation) {

        Math::Vector dst_pos;

        if(Engine::Util::generate_number_between(0 , 255) > 200 ) {
            dst_pos = Math::Vector(
                    Engine::Util::generate_number_between(0 , 255) ,
                    Engine::Util::generate_number_between(0 , 255)
                    );
        } else {
            dst_pos = src_pos;
        }


        MotionOutput result = get_kinematic_seek(src_pos , dst_pos);
        return result;
    }
}
