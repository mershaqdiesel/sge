#ifndef __SGE_INITSTATE
#define __SGE_INITSTATE

#include "State.hpp"

namespace sge
{
	class InitState : public State
	{
	public:
		InitState(StateManager* m);
		~InitState();

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