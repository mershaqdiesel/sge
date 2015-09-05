#ifndef __SGE_STATEMANAGER
#define __SGE_STATEMANAGER

#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>

namespace sge
{
	class State;

	class StateManager
	{
	public:
		StateManager();
		StateManager(const StateManager& rhs);
		~StateManager();

		void Init();
		void Run();
		void Teardown();

		void PushState(State* s);
		void ChangeState(State* s);

		State* PopState();
		State* PeekState();

		sf::RenderWindow* window;


	private:
		unsigned int _screenw, _screenh;

		std::vector<State *> _states;
	};
}

#endif
