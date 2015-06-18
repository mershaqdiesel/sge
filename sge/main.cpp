#include <vector>

#include <SFML\Graphics.hpp>

#include "GameObject.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	float x = 0.f, y = 0.f;
	unsigned int screenw = 600, screenh = 800;

	std::vector<sge::GameObject> objects;

	sf::RenderWindow window(sf::VideoMode(screenh, screenw), "sge window");

	while (window.isOpen())
	{
		sf::Event event;
		sf::Keyboard::Key k;
		while (window.pollEvent(event))
		{
			k = sf::Keyboard::Unknown;
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
				k = event.key.code;

			switch (k)
			{
			case sf::Keyboard::Left:
				x -= 10.f;
				break;
			case sf::Keyboard::Right:
				x += 10.f;
				break;
			case sf::Keyboard::Down:
				y += 10.f;
				break;
			case sf::Keyboard::Up:
				y -= 10.f;
				break;
			case sf::Keyboard::Escape:
				window.close();
				break;
			}
		}
		
		window.clear();

		window.display();

	}

	return 0;
}