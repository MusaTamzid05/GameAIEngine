#include "engine/steering_seek_triangle.h"
#include "engine/mouse.h"
#include "physics/steering_seek.h"

namespace Engine {

    SteeringSeekTriangle::SteeringSeekTriangle(Mouse* mouse):SteeringTriangle(mouse) {

    }

    SteeringSeekTriangle::~SteeringSeekTriangle() {

    }

    void SteeringSeekTriangle::update() {
        Math::Vector dst(mouse->get_position().x , mouse->get_position().y);
        Physics::SteeringOutput result = Physics::get_steering_seek(*this , dst);

        Math::Vector old_pos = get_position();
        Math::Vector new_pos = old_pos + result.linear;
        set_position(new_pos);
    }

};
