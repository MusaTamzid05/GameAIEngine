#include "physics/orientation.h"
#include <cmath>

namespace Physics {
    float calculate_orientation(Math::Vector& velocity , float current) {

        if(velocity.length() > 0) 
            return atan2(-velocity.x , -velocity.y);
        return current;
    }
};
