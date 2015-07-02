#ifndef __SGE_INITSTATE
#define __SGE_INITSTATE

#include "State.hpp"

namespace sge
{
	class InitState : public State
	{
	public:
		InitState(StateManager* m);

		void HandleInput();
		void Update(float dt);
		void Draw();
	};
}

#endif