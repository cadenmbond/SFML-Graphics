#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameInit.h"
#include "GameObject.h"

std::vector<GameObject> game_objects;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game Window");

    GameInit gameInit;  // Create an instance of GameInit

    // Initialize the Scene
    game_objects = gameInit.init_objects();

    // Find the player object and set it in the player controller
    GameObject* player = gameInit.getPlayer();
    if (player != nullptr) { // If the player object has been found
        const float speed = 1;  // Player speed
        while (window.isOpen())  // Game Loop
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                }
            }

            window.clear(); 

            // Handle player input for movement
            for (auto& obj : game_objects) {  // Iterate through all game objects
                if (obj.isPlayer()) {  // Check if the object is the player
                    float x = obj.shape.getPosition().x;
                    float y = obj.shape.getPosition().y;

                    // Debug output
                    std::cout << "Player position: " << x << ", " << y << std::endl;

                    // Player movement logic
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                        y -= speed;  // Move up
                        obj.update_position(x, y);
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                        y += speed;  // Move down
                        obj.update_position(x, y);
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                        x -= speed;  // Move left
                        obj.update_position(x, y);
                    }
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                        x += speed;  // Move right
                        obj.update_position(x, y);
                    }
                }
            }

            // Render the scene with all game objects
            gameInit.render_scene(window, game_objects);

            window.display();  // Display the updated frame
        }
    }
    else {
        std::cout << "Player not found!" << std::endl;
    }

    return 0;
}
