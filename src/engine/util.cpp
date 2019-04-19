#include "engine/util.h"
#include <ctime>
#include <cstdlib>
namespace Engine {

    namespace Util {
        int generate_number_between(int min , int max) {
            return (rand() % max) + min;
        }
    }

};
