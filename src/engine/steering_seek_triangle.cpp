#include "engine/steering_seek_triangle.h"
#include "engine/mouse.h"
#include "physics/steering_seek.h"

namespace Engine {

    SteeringSeekTriangle::SteeringSeekTriangle(Mouse* mouse):SteeringTriangle(mouse) {

    }

    SteeringSeekTriangle::~SteeringSeekTriangle() {

    }

    void SteeringSeekTriangle::update() {
        target.position = mouse->get_position();
        charecter.position = get_position();

        Physics::SteeringSeek steering_seek(&charecter , &target);
        result = steering_seek.get_steering_output();

        update_position();
    }

};
