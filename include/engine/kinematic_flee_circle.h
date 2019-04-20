#ifndef KINEMATIC_FLEE_H
#define KINEMATIC_FLEE_H


#include "engine/circle.h"

namespace Engine {

    class Mouse;

    class KinematicFleeCircle: public  Circle {

        public:

            KinematicFleeCircle(Mouse*  mouse);
            virtual ~KinematicFleeCircle() {}

            void update();

        private:
            Mouse*  m_mouse;


    };
}

#endif
