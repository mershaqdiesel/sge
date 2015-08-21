#ifndef __SGE_GRAPHICSCOMPONENT
#define __SGE_GRAPHICSCOMPONENT

#include <string>

#include <SFML/Graphics.hpp>

#include "Component.hpp"
#include "GameObject.hpp"

namespace sge
{
	class GraphicsComponent : public Component
	{
	public:
		void Draw(sf::RenderTarget& target);
        const std::string& GetName() { return Component::GetName(); };

	private:
		GraphicsComponent(GameObject* o);
        void SetName(const std::string& n) { Component::SetName(n); };

		// inheirted
		// GameObject* _object

		sf::CircleShape _shape;
	};
}

#endif
