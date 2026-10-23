#include <SFML/Graphics.hpp>


int main()
{

    sf::RenderWindow window( sf::VideoMode( { 600, 600 } ), "SFML works!" );
    window.setFramerateLimit(30);

    int step = 0;
    while ( window.isOpen() )
    {
        while ( const std::optional event = window.pollEvent() )
        {
            if ( event->is<sf::Event::Closed>() )
                window.close();
        }

        window.clear(sf::Color(50, 121, 168));
        window.display();
    }
}

