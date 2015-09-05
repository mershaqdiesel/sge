#ifndef __SGE_GRAPHICSCOMPONENT
#define __SGE_GRAPHICSCOMPONENT

#include <string>

#include <SFML/Graphics.hpp>

#include "Component.hpp"
#include "GameObject.hpp"

namespace sge
{
    class GraphicsSystem;
    
	class GraphicsComponent : public Component
	{
	public:
	    friend GraphicsSystem;
	    
		void Draw(sf::RenderTarget& target);
        const std::string& GetName() { return Component::GetName(); };

	private:
		GraphicsComponent(GameObject* o);

		// inheirted
		// GameObject* _object

		sf::CircleShape _shape;
	};
}

#endif
