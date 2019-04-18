#ifndef KINEMATIC_H
#define KINEMATIC_H

#include "math/vector.h"
#include "physics/steering_output.h"


namespace Physics {

    class Kinematic {


        public:
            Kinematic();
            virtual ~Kinematic(){}

            void update(SteeringOutput& steering , float time);
        private:

            Math::Vector position;
            Math::Vector velocity;
            float orientation;
            float rotation;

    };
}
#endif
