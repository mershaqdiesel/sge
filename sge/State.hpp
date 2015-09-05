#ifndef __SGE_STATE
#define __SGE_STATE

#include <memory>
#include <vector>

#include <SFML/Window.hpp>

#include "GraphicsSystem.hpp"
#include "GameObject.hpp"

namespace sge
{
	class StateManager;

	class State
	{
	public:
		virtual ~State() {};

		virtual void HandleInput(sf::Event& e) = 0;
		virtual void Update(float dt) = 0;
		virtual void Draw() = 0;

	protected:
		StateManager* _manager;

		GraphicsSystem _graphics;

		std::vector<GameObject *> _actors;
	};
}

#endif
