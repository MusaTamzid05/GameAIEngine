#ifndef KINEMATIC_H
#define KINEMATIC_H

#include "math/vector.h"
#include "physics/steering_output.h"


namespace Physics {

    class Kinematic {


        public:

            Kinematic() {}
            Kinematic(const Math::Vector& position , const Math::Vector& velocity = Math::Vector(0, 0));
            virtual ~Kinematic(){}

            void update(SteeringOutput& steering , float time);

            Math::Vector position;
            Math::Vector velocity;
            float orientation;
            float rotation;

    };
}
#endif
