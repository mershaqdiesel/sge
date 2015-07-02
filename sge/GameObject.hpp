#ifndef __SGE_GAMEOBJECT
#define __SGE_GAMEOBJECT

#include <vector>

#include <SFML\Graphics.hpp>

#include "Vector2f.hpp"

namespace sge
{
	class Component;

	class GameObject
	{
	public:
		virtual void Update(float dt, sf::Event e) {};
		virtual void Add(const Component& comp) { _components.push_back(const_cast<Component *>(&comp)); };

		Vector2f _pos;

	protected:
		std::vector<sge::Component *> _components;
	};
}

#endif