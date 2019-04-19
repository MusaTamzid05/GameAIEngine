#include "engine/following_circle.h"
#include "engine/mouse.h"
#include "physics/kinematic_seek.h"
#include  <SFML/Graphics/CircleShape.hpp>
#include <iostream>

namespace Engine {

    
    FollowingCirle::FollowingCirle(Mouse*  mouse):
        m_mouse(mouse),
        Circle(){

        }

    void FollowingCirle::update() {

        Math::Vector dst(m_mouse->get_position().x , m_mouse->get_position().y);
        Math::Vector src = get_position();
        Physics::MotionOutput kinematic_seek = Physics::get_kinematic_seek(src , dst);

        Math::Vector new_pos = src + kinematic_seek.velocity;
        set_position(new_pos);
    }
};
