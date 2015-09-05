#include "Car.hpp"

void sge::Car::HandleInput(sf::Event& e)
{
	sf::Keyboard::Key k;
	k = sf::Keyboard::Unknown;
	
	if (e.type == sf::Event::KeyPressed)
		k = e.key.code;

	switch (k)
	{
	case sf::Keyboard::Left:
		pos.x -= 10.f;
		break;
	case sf::Keyboard::Right:
		pos.x += 10.f;
		break;
	case sf::Keyboard::Down:
		pos.y += 10.f;
		break;
	case sf::Keyboard::Up:
		pos.y -= 10.f;
		break;
	default:
	    break;
	}
	std::cout << pos.x << ", " << pos.y << std::endl;
}
