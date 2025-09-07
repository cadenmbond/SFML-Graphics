<h1 align="center">SFML Graphics</h1>

<p align="center">
  <i>A simple project built with SFML to create a flexible and easy-to-extend game interface.</i>
</p>

<p align="center">
  <img src="https://raw.githubusercontent.com/cadenmbond/SFML-Graphics/master/Game%20Window.png" alt="Game Window Example" width="60%" />
</p>

<h3 align="center">Video Example</h3>
<p align="center">https://www.youtube.com/watch?v=KGnONpyrNos</p>

---

## Adding Objects

Adding objects is simple:

```cpp
create_object(sf::Vector2f(100, 100), 200.f, 30.f, objects, "Player", "Player", sf::Color::Red);
create_object(sf::Vector2f(50, 50), 400.f, 300.f, objects, "Block", "Environment", sf::Color::Blue);
