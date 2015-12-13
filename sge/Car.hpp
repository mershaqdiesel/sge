#ifndef __SGE_CAROBJECT
#define __SGE_CAROBJECT

#include <iostream>

#include <SFML/Graphics.hpp>

#include "GameObject.hpp"

namespace sge
{
	class Car : public GameObject
	{
	public:
		Car() {};
		~Car() {};

		void HandleInput(sf::Event& e);

	private:
	};
}

#endif
