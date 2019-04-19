#ifndef ENTITY_H
#define ENTITY_H


namespace sf  {
    class RenderWindow;
};


namespace Engine {
    
    class Entity {
        public:

            Entity() {}

            virtual void update() = 0;
            virtual void draw(sf::RenderWindow& window) = 0;
    };
}
#endif
