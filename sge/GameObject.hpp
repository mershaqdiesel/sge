#ifndef __SGE_GAMEOBJECT
#define __SGE_GAMEOBJECT

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

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

		sf::Transformable& GetTransform();

	protected:
		std::vector<Component*> _components;
		sf::Transformable _trans;
	};
}

#endif
