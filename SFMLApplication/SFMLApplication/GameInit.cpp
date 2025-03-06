#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameInit.h"
#include "GameObject.h"

void GameInit::create_object(sf::Vector2f size, float x, float y, std::vector<GameObject>& objectVector,
    std::string objectName, std::string objectPriority, sf::Color color)
{
    objectVector.emplace_back(size, x, y, objectPriority, color);
}

std::vector<GameObject>& GameInit::init_objects()
{
    // Refresh Object Vector
    objects.clear();
    //                     Size              Position           Obj Vector       Obj Name        Priority          Color
    create_object(sf::Vector2f(100, 100),   200.f, 30.f,          objects,       "Player",       "Player",     sf::Color::Red);
    create_object(sf::Vector2f(50, 50),     400.f, 300.f,         objects,        "Block",      "Environment", sf::Color::Blue);


    std::cout << "Objects in vector: " << objects.size() << std::endl;
    for (const auto& obj : objects) {
        std::cout << "Object Priority: " << obj.priority << std::endl;
    }

    return objects;  // Return initialized object vector
}

GameObject* GameInit::getPlayer()
{
    for (auto& obj : objects)
    {
        if (obj.priority == "Player")
        {
            return &obj;  // Return pointer to the player object
        }
    }
    return nullptr;  // There is no player
}

void GameInit::render_scene(sf::RenderWindow& window, std::vector<GameObject>& GameObjects)
{
    for (auto& object : GameObjects)  // Loop through each object in the vector
    {
        object.draw(window);  // Draw the object
    }
}
