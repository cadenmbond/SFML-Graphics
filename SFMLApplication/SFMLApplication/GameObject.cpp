#include <iostream>
#include "GameObject.h"

void GameObject::update_position(float x, float y) {
    position = sf::Vector2f(x, y);   
    shape.setPosition(position);      // Update the position of the shape for rendering
}
