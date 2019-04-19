#ifndef KINEMATIC_SEEK_CIRCLE_H
#define KINEMATIC_SEEK_CIRCLE_H

#include "engine/circle.h"

namespace Engine {

    class Mouse;

    class KinematicSeekCircle: public  Circle {

        public:

            KinematicSeekCircle(Mouse*  mouse);
            virtual ~KinematicSeekCircle() {}

            void update();

        private:
            Mouse*  m_mouse;


    };
}

#endif
