#include "physics/kinematic.h"

namespace Physics {

    Kinematic::Kinematic(const Math::Vector& position , const Math::Vector& velocity):
    position(position),
    velocity(velocity){

    }


    void Kinematic::update(SteeringOutput& steering , float time) {

        position += velocity * time; // u + at
        orientation += rotation * time;
        
        velocity += steering.linear * time;
        rotation += steering.angular * time;
    }
};
