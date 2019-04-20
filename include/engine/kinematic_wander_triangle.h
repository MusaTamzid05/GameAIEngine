#ifndef KINEMATIC_WANDER_TRIANGLE_H
#define KINEMATIC_WANDER_TRIANGLE_H


#include "engine/triangle.h"

namespace Engine {

    class Mouse;

    class KinematicWanderTriangle : public Triangle {

        public:

            KinematicWanderTriangle(Mouse*  mouse);
            virtual ~KinematicWanderTriangle();

            void update();

        private:
            Mouse*  m_mouse;
    };

};

#endif
