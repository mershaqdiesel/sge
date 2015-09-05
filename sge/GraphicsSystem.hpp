#ifndef __SGE_GRAPHICSSYSTEM
#define __SGE_GRAPHICSSYSTEM

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

#include "System.hpp"
#include "GraphicsComponent.hpp"

namespace sge
{
	class GraphicsSystem : public System
	{
	public:
		GraphicsSystem() { };

		void Start();
		void Update(float dt);
		void Stop();

		void Draw(sf::RenderTarget& t);

		GraphicsComponent* CreateComponent(const std::string& type, const GameObject* obj);

	private:
		std::vector<GraphicsComponent*> _drawableComps;
	};
}

#endif
