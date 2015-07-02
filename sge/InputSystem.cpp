#include "InputSystem.hpp"

void sge::InputSystem::PollEvents()
{
	sf::Event event;
	sf::Keyboard::Key k;
	while (_window.pollEvent(event))
	{
		k = sf::Keyboard::Unknown;

		if (event.type == sf::Event::Closed)
			_window.close();

		if (event.type == sf::Event::KeyPressed)
			k = event.key.code;

		switch (k)
		{
		case sf::Keyboard::Escape:
			_window.close();
			break;
		}
	}
}