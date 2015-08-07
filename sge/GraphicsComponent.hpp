#ifndef __SGE_GRAPHICSCOMPONENT
#define __SGE_GRAPHICSCOMPONENT

#include <SFML/Graphics.hpp>

#include "Component.hpp"

namespace sge
{
	class GraphicsSystem;

	class GraphicsComponent : public Component
	{
	public:
		friend GraphicsSystem;

		void Draw(sf::RenderTarget& target);

	private:
		GraphicsComponent(sge::GameObject* obj) : Component(obj, std::string("GraphicsComponent")), _shape(10.0f)
			{ _shape.setFillColor(sf::Color::Green); };

		// inheirted
		// GameObject* _object

		sf::CircleShape _shape;
	};
}

#endif
