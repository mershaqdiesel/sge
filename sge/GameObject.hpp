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
	    GameObject() {};
	    virtual ~GameObject() {};
	    
	    virtual void HandleInput(sf::Event& e) {};
	    
		bool AddComponent(Component* comp);
		Component* GetComponent(const std::string& typeName);

		Vector2f pos;

	protected:
		std::vector<Component*> _components;
	};
}

#endif
