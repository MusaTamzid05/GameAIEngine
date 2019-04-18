#include "physics/kinematic.h"

namespace Physics {

    Kinematic::Kinematic() {

    }


    void Kinematic::update(SteeringOutput& steering , float time) {

        position += velocity * time; // u + at
        orientation += rotation * time;
        
        velocity += steering.linear * time;
        rotation += steering.angular * time;
    }
};
