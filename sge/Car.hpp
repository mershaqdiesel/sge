#ifndef __SGE_CAROBJECT
#define __SGE_CAROBJECT

#include <iostream>

#include <SFML\Graphics.hpp>

#include "GameObject.hpp"

namespace sge
{
	class Car : public GameObject
	{
	public:
		inline Car() {};
		inline ~Car() {};

		void HandleInput(sf::Event& e);
		void Update(float dt);
		void Draw(sf::RenderTarget& t);

	private:
		// inherited
		// Vector2f _pos
		// vector<Component *> _components
	};
}

#endif