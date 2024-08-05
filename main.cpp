#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple 2D Game");

    // Create a circle shape
    sf::CircleShape circle(50.f); // Radius of 50
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(350.f, 250.f);

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

        // Move the circle with arrow keys
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            circle.move(-0.1f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            circle.move(0.1f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            circle.move(0.f, -0.1f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            circle.move(0.f, 0.1f);

        // Clear screen
        window.clear();

        // Draw the circle
        window.draw(circle);

        // Update the window
        window.display();
    }

    return 0;
}