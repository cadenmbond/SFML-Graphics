<h1 align="center">SFML Graphics</h1>

<p align="center">
  <i>A Simple Project built using the Simple Fast Multimedia Library (SFML) to create a game interface that's easy to manage and extend.</i>
</p>

<p align="center">
  <img src="https://raw.githubusercontent.com/cadenmbond/SFML-Graphics/master/Game%20Window.png" alt="Game Window Example" width="60%" />
</p>
<h3 align="center">View Video Example</h3>
<p align="center" target="_blank">https://www.youtube.com/watch?v=KGnONpyrNos</p>

---

## Adding Objects to the Game

To create game objects, you can use the following code structure: <i>(in GameInit.h inside the init_objects function)</i>

<img src="https://raw.githubusercontent.com/cadenmbond/SFML-Graphics/master/CreateObject.png" alt="Create Object Example" align="center">

```cpp
//                          Size          Position           Object Vector        Object Name        Priority             Color
create_object(sf::Vector2f(100, 100),   200.f, 30.f,           objects,            "Player",         "Player",       sf::Color::Red);
create_object(sf::Vector2f(50, 50),     400.f, 300.f,          objects,            "Block",          "Environment",  sf::Color::Blue);
```

## Explanation of the Scripts

### `GameObject.h`

This file defines the structure of a `GameObject`. It contains:
- **Attributes**: Information about the object like its size, position, priority, and color.
- **Methods**: Functions for drawing the object to the screen and updating its position.

### `GameObject.cpp`

This file implements the methods declared in `GameObject.h`. It contains the logic for:
- **Constructor**: Initializes the `GameObject` with specific attributes (size, position, priority, and color).
- **draw()**: Draws the object onto the game window using SFML's `sf::RenderWindow`.
- **update_position()**: Updates the position of the object based on new x and y values.

### `Main.cpp`

This file contains the main entry point for the game. It includes:
- **Window Creation**: Initializes the SFML window where the game will be displayed.
- **Game Loop**: Contains the main loop that runs while the game is open, handling events (like key presses or window close), and continuously rendering the scene with updated object positions.
- **Player Movement**: Includes logic for handling player movement based on keyboard input (WASD).

### `GameInit.h`

This header file defines the `GameInit` class, which is responsible for:
- **Creating Game Objects**: A function to initialize and store all the game objects.
- **Rendering the Scene**: A method to draw all game objects to the window during each frame.

### `GameInit.cpp`

This file implements the methods from `GameInit.h`. It includes:
- **init_objects()**: Initializes the game objects (e.g., player, enemy, etc.) and stores them in a vector.
- **create_object()**: Helper method to create objects with specific attributes (size, position, etc.) and add them to the object vector.
- **render_scene()**: Draws all game objects to the screen by calling their `draw()` methods.

### `Installation instructions`

- Clone the Repository
- Open the Solution in VS 2022
- Build and Run
