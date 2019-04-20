#include "engine/steering_triangle.h"
#include "engine/mouse.h"

namespace Engine {

    SteeringTriangle::SteeringTriangle(Mouse* mouse):
        mouse(mouse) {

        }
            
    SteeringTriangle::~SteeringTriangle() {
        delete mouse;
    }

};
