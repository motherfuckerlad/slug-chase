#include "includes/Environment.h"

Environment::Environment(const sf::Vector2f &windowSize)
{
    // Set the ground properties
    const float groundHeight = 100.f;
    ground.setSize(sf::Vector2f(windowSize.x, groundHeight));
    ground.setFillColor(groundColor);
    ground.setPosition(0.f, windowSize.y - groundHeight);

    // Define obstacles list
    std::vector<sf::RectangleShape> obstacles;
}

void Environment::generateObstacles()
{
    // Generate environment obstacles

}

void Environment::draw(sf::RenderWindow &window)
{
    window.clear(backgroundColor);
    window.draw(ground);
}
