#include <SFML/Graphics.hpp>
#include "includes/Environment.h"

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Simple 2D Game", sf::Style::Fullscreen);

    // Get the desktop resolution
    sf::Vector2u resolution = window.getSize();

    // Create the environment
    Environment environment(sf::Vector2f(resolution.x, resolution.y));

    // Create a rectangle shape
    sf::RectangleShape rectangle(sf::Vector2f(100.f, 100.f));
    rectangle.setFillColor(sf::Color::Green);
    rectangle.setPosition(350.f, 250.f);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Move the rectangle with arrow keys
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            rectangle.move(-0.1f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            rectangle.move(0.1f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            rectangle.move(0.f, -0.1f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            rectangle.move(0.f, 0.1f);

        // Draw the environment
        environment.draw(window);

        // Draw the rectangle
        window.draw(rectangle);

        // Update the window
        window.display();
    }

    return 0;
}
