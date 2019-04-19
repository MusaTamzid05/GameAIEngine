#ifndef FOLLOWING_CIRCLE_H
#define FOLLOWING_CIRCLE_H

#include "engine/circle.h"

namespace Engine {

    class Mouse;

    class FollowingCirle : public  Circle {

        public:

            FollowingCirle(Mouse*  mouse);
            virtual ~FollowingCirle() {}

            void update();

        private:
            Mouse*  m_mouse;


    };
}

#endif
