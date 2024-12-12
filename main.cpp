/*
* SFML + CLion demo.
 * Made according to the instructions in the video https://www.youtube.com/watch?v=R3x2OvsUHOU
 * Use only MinGW (Not Cygwin)
 */

#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");


    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event{};
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear();

        sf::CircleShape shape(50.f);
        shape.setFillColor(sf::Color(150, 50, 250));

        // set a 10-pixel wide orange outline
        shape.setOutlineThickness(10.f);
        shape.setOutlineColor(sf::Color(250, 150, 100));

        window.draw(shape);

        sf::Vertex line[] =
        {
            sf::Vertex(sf::Vector2f(0.f, 0.f)),
            sf::Vertex(sf::Vector2f(800.f, 600.f)),
            sf::Vertex(sf::Vector2f(800.f, 0.f)),
            sf::Vertex(sf::Vector2f(0.f, 600.f))
        };
        line[0].color = sf::Color::Green;
        line[1].color = sf::Color::Yellow;
        line[2].color = sf::Color::Red;
        line[3].color = sf::Color::Blue;

        window.draw(line, 4, sf::Lines);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}

