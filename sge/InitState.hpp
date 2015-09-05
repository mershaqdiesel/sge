#ifndef __SGE_INITSTATE
#define __SGE_INITSTATE
    
#include <memory>
#include <string>

#include "State.hpp"
#include "InitState.hpp"
#include "StateManager.hpp"

#include "Car.hpp"
#include "GraphicsComponent.hpp"


namespace sge
{
	class InitState : public State
	{
	public:
		InitState(StateManager* m);
		~InitState() {};

		void HandleInput(sf::Event& e);
		void Update(float dt);
		void Draw();

	private:
		// inheirited
		// _manager
		// _actors
	};
}

#endif
