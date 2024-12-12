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

    // Create a graphical text to display
    sf::Font font;

    sf::Text text("Hello SFML", font, 50);

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

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}

