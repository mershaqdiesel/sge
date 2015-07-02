#ifndef __SGE_GRAPHICSSYSTEM
#define __SGE_GRAPHICSSYSTEM

#include <vector>

#include "System.hpp"
#include "GraphicsComponent.hpp"

namespace sge
{
	class GraphicsSystem : public System
	{
	public:
		GraphicsSystem() { };

		void Add(sge::GraphicsComponent& comp) { _drawableComps.push_back(&comp); }
		void Start();
		void Update(float dt);
		void Stop();

	private:
		std::vector<sge::GraphicsComponent *> _drawableComps;

		sf::RenderWindow _window;
	};
}

#endif