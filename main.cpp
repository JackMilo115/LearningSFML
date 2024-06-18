#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(512, 512), "Simple Window", sf::Style::Close | sf::Style::Titlebar);
	sf::RectangleShape player(sf::Vector2f(100.f, 100.f));
	player.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		sf::Event evnt;

		while (window.pollEvent(evnt))
		{
			if (evnt.type == evnt.Closed)
			{
				window.close();
			}
		}
		window.draw(player);
		window.display();
	}

	return 0;
}