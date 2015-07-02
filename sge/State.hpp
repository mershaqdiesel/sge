#ifndef __SGE_STATE
#define __SGE_STATE

namespace sge
{
	class StateManager;

	class State
	{
	public:
		virtual void HandleInput(/* probably need some sort of input state here*/) = 0;
		virtual void Update(float dt) = 0;
		virtual void Draw() = 0;

	protected:
		StateManager* _manager;
	};
}

#endif