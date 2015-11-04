#include "Car.hpp"

void sge::Car::HandleInput(sf::Event& e)
{
	sf::Keyboard::Key k;
	k = sf::Keyboard::Unknown;
	
	if (e.type == sf::Event::KeyPressed)
		k = e.key.code;

	float x = 0.f, y = 0.f;

	switch (k)
	{
	case sf::Keyboard::Left:
		x = -10.f;
		break;
	case sf::Keyboard::Right:
		x = 10.f;
		break;
	case sf::Keyboard::Down:
		y = 10.f;
		break;
	case sf::Keyboard::Up:
		y = -10.f;
		break;
	default:
	    break;
	}
	_trans.move(x, y);
	//std::cout << pos.x << ", " << pos.y << std::endl;
}
