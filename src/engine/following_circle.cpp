#include "engine/following_circle.h"
#include "engine/mouse.h"
#include  <SFML/Graphics/CircleShape.hpp>

namespace Engine {

    
    FollowingCirle::FollowingCirle(Mouse*  mouse):
        m_mouse(mouse),
        Circle(){

        }

    void FollowingCirle::update() {
        m_circle->setPosition(m_mouse->get_position().x , m_mouse->get_position().y);
    }
};
