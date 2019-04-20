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
        Math::Vector dst(mouse->get_position().x , mouse->get_position().y);
        Physics::SteeringOutput result = Physics::get_steering_flee(*this , dst);

        Math::Vector old_pos = get_position();
        Math::Vector new_pos = old_pos + result.linear;
        set_position(new_pos);

        Triangle::check_edge();
    }

};
