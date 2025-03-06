#ifndef GAME_INIT_H
#define GAME_INIT_H

#include <vector>
#include "GameObject.h"
#include <SFML/Graphics.hpp>

class GameInit {
public:
    std::vector<GameObject> objects;  // Global object storage for the game

    void create_object(sf::Vector2f size, float x, float y, std::vector<GameObject>& objectVector,
        std::string objectName, std::string objectPriority, sf::Color color);

    std::vector<GameObject>& init_objects();  // Initialize objects and return reference to objects

    GameObject* getPlayer();  // Find and return player object pointer

    void render_scene(sf::RenderWindow& window, std::vector<GameObject>& GameObjects);
};

#endif
