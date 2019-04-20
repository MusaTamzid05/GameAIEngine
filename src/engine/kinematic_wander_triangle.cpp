#include "engine/kinematic_wander_triangle.h"
#include "engine/util.h"
#include "engine/mouse.h"
#include "physics/motion_output.h"
#include "physics/kinematic_wander.h"
#include <SFML/Graphics/CircleShape.hpp>


namespace Engine {

    KinematicWanderTriangle::KinematicWanderTriangle(Mouse*  mouse):
    m_mouse(mouse) , 
    Triangle(){
    }

    KinematicWanderTriangle::~KinematicWanderTriangle() {

    }

    void KinematicWanderTriangle::update() {

        Math::Vector dst(m_mouse->get_position().x , m_mouse->get_position().y);
        Math::Vector src = get_position();
        Physics::MotionOutput result = Physics::get_kinematic_wander(src , current_orientation);

        Math::Vector pos = get_position();
        pos = pos + result.velocity;
        set_position(pos);
        Triangle::check_edge();

    }
};


