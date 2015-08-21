#ifndef __SGE_GAMEOBJECT
#define __SGE_GAMEOBJECT

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

#include "Vector2f.hpp"

namespace sge
{
	class Component;

	class GameObject
	{
	public:
		virtual bool AddComponent(Component* comp);
		virtual Component* GetComponent(const std::string& typeName);

		Vector2f pos;

	protected:
		std::vector<Component*> _components;
	};
}

#endif
