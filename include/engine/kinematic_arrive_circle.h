#ifndef KINEMATIC_ARRIVE_CIRCLE_H
#define KINEMATIC_ARRIVE_CIRCLE_H


#include "engine/circle.h"

namespace Engine {

    class Mouse;

    class KinematicArriveCircle: public Circle {

        public:

            KinematicArriveCircle(Mouse*  mouse);
            virtual ~KinematicArriveCircle() {}

            void update();

        private:
            Mouse*  m_mouse;


    };
}

#endif
