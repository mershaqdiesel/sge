#ifndef __SGE_INPUTSYSTEM
#define __SGE_INPUTSYSTEM

#include <vector>

#include <SFML/Window.hpp>

namespace sge
{
	class InputSystem
	{
	public:
		InputSystem();

		void PollEvents();

	private:
		//std::vector<InputObservers> _observers;

		sf::Window _window;
	};
}

#endif