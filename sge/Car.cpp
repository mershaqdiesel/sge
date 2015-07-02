#include "Car.hpp"

void sge::Car::Update(float dt, sf::Event event)
{
	sf::Keyboard::Key k;
	k = sf::Keyboard::Unknown;
	
	if (event.type == sf::Event::KeyPressed)
		k = event.key.code;

	switch (k)
	{
	case sf::Keyboard::Left:
		_pos._x -= 10.f;
		break;
	case sf::Keyboard::Right:
		_pos._x += 10.f;
		break;
	case sf::Keyboard::Down:
		_pos._y += 10.f;
		break;
	case sf::Keyboard::Up:
		_pos._y -= 10.f;
		break;
	}
	std::cout << _pos._x << ", " << _pos._y << std::endl;
}