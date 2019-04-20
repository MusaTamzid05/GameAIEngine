#include "engine/kinematic_arrive_circle.h"
#include "physics/kinematic_arrive.h"
#include "engine/defines.h"
#include "engine/mouse.h"


namespace Engine {

    
    KinematicArriveCircle::KinematicArriveCircle(Mouse*  mouse):
        m_mouse(mouse),
        Circle(){

        }

    void KinematicArriveCircle::update() {

        Math::Vector dst(m_mouse->get_position().x , m_mouse->get_position().y);
        Math::Vector src = get_position();
        Physics::MotionOutput kinematic_seek = Physics::get_kinematic_arrive(src , dst);

        Math::Vector new_pos = src + kinematic_seek.velocity;
        set_position(new_pos);
    }
};
