#ifndef __SGE_GRAPHICSCOMPONENT
#define __SGE_GRAPHICSCOMPONENT

#include <SFML\Graphics.hpp>

#include "Component.hpp"

namespace sge
{
	class GraphicsComponent : public Component
	{
	public:
		GraphicsComponent(sge::GameObject* obj) : Component(obj), _shape(10.0f) { _shape.setFillColor(sf::Color::Green); };
		void Draw(sf::RenderTarget& target);
		void Update(float dt);

	private:
		// inheirted
		// GameObject* _object

		sf::CircleShape _shape;
	};
}

#endif