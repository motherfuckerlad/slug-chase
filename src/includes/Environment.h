#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <SFML/Graphics.hpp>

class Environment
{
public:
    // Constants
    const sf::Color backgroundColor = sf::Color(179, 164, 164);
    const sf::Color groundColor = sf::Color(44, 62, 80);

    // Constructor
    Environment(const sf::Vector2f &windowSize);

    // Member functions
    void draw(sf::RenderWindow &window);
    float getGravity() const;

private:
    // Member variables
    sf::RectangleShape ground;
};

#endif