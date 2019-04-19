#include "engine/game.h"
#include "engine/defines.h"
#include "math/vector.h"
#include <iostream>
#include <ctime>

int main(int argc , char** argv) {

    srand(time(nullptr));
    Engine::Game game(Engine::Define::WIDTH , Engine::Define::HEIGHT);
    game.run();

    return 0;
}
