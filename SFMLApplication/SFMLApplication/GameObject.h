#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <SFML/Graphics.hpp>
#include <string>

class GameObject {
public:
    sf::RectangleShape shape;
    std::string priority;
    sf::Vector2f position;

    GameObject(sf::Vector2f size, float x, float y, std::string objpriority, sf::Color color) {
        position = sf::Vector2f(x, y);
        shape.setSize(size);
        shape.setPosition(position);
        shape.setFillColor(color);
        priority = objpriority;
    }

    void draw(sf::RenderWindow& window) {
        window.draw(shape);  // Draw the shape in the window
    }

    void update_position(float x, float y);

    bool isPlayer() const {
        return priority == "Player";
    }
};


#endif
