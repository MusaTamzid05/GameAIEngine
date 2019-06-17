#include "engine/steering_flee_triangle.h"
#include "math/vector.h"
#include "engine/mouse.h"
#include "physics/steering_flee.h"


namespace Engine {

    SteeringFleeTriangle::SteeringFleeTriangle(Mouse* mouse):SteeringTriangle(mouse) {

    }

    SteeringFleeTriangle::~SteeringFleeTriangle() {

    }

    void SteeringFleeTriangle::update() {

        target.position = mouse->get_position();
        charecter.position = get_position();

        Physics::SteeringFlee steering_flee(&charecter , &target);
        result = steering_flee.get_steering_output();

        update_position();
        Triangle::check_edge();
    }

};
