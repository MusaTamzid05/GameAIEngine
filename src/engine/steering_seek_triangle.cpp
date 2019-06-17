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
        target.position = mouse->get_position();
        charecter.position = get_position();

        Physics::SteeringSeek steering_seek(&charecter , &target);
        Physics::SteeringOutput result = steering_seek.get_steering_output();

        Math::Vector old_pos = get_position();
        Math::Vector new_pos = old_pos + result.linear;
        set_position(new_pos);
    }

};
