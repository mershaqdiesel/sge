#ifndef __SGE_CAROBJECT
#define __SGE_CAROBJECT

#include <iostream>

#include <SFML\Graphics.hpp>

#include "GameObject.hpp"

namespace sge
{
	class Car : GameObject
	{
	public:
		inline Car() { _car.setRadius(10.0f); _car.setFillColor(sf::Color::Green); };
		inline ~Car() {};
		void Update(float dt, sf::Event event);
		void Draw(sf::RenderTarget& target);

	private:
		sf::CircleShape _car;
	};
}

#endif