#include "engine/steering_triangle.h"
#include "engine/mouse.h"

namespace Engine {

    SteeringTriangle::SteeringTriangle(Mouse* mouse):
        mouse(mouse) {

        }
            
    SteeringTriangle::~SteeringTriangle() {
        delete mouse;
    }

    void SteeringTriangle::update_position() {

        Math::Vector old_pos = get_position();
        Math::Vector new_pos = old_pos + result.linear;
        set_position(new_pos);
    }

};
