#include "engine/kinematic_flee_circle.h"
#include "physics/motion_output.h"
#include "engine/mouse.h"
#include "physics/kinematic_flee.h"
#include  <SFML/Graphics/CircleShape.hpp>
#include <iostream>

namespace Engine {
    
    KinematicFleeCircle::KinematicFleeCircle(Mouse*  mouse):
        m_mouse(mouse),
        Circle(){

        }

    void KinematicFleeCircle::update() {

        Math::Vector dst(m_mouse->get_position().x , m_mouse->get_position().y);
        Math::Vector src = get_position();
        Physics::MotionOutput kinematic_seek = Physics::get_kinematic_flee(src , dst);

        Math::Vector new_pos = src + kinematic_seek.velocity;
        set_position(new_pos);
    }
};
