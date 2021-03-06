#include "StateManager.hpp"

sge::StateManager::StateManager() :  _screenw(800), _screenh(600)
{
	window = new sf::RenderWindow();
}

sge::StateManager::StateManager(const StateManager& rhs) : _states(rhs._states)
{
	window = rhs.window;
	_screenh = rhs._screenh;
	_screenw = rhs._screenw;
}

sge::StateManager::~StateManager()
{
	while (_states.size() > 0)
	{
		State* s = PopState();
		delete s;
	}
}

void sge::StateManager::Init()
{
	window->create(sf::VideoMode(_screenw, _screenh), "sge window");
}

void sge::StateManager::Teardown()
{
	window->close();
}

void sge::StateManager::Run()
{
	sf::Clock clock;
	clock.restart();
	float dt = 0.f;
	float cumulativeT = 0.f;

	while (window->isOpen())
	{
		dt = clock.getElapsedTime().asSeconds();
		cumulativeT += dt;
        //std::cout << "Time elapsed: " << dt << "\t" << cumulativeT << std::endl;
		clock.restart();

		State* currentState = PeekState();

		if (currentState)
		{
			sf::Event e;
			while (window->pollEvent(e))
			{
                if (e.type == sf::Event::Closed)
                {
                    window->close();
                }

				currentState->HandleInput(e);
			}

			if (cumulativeT >= .2f)
			{
				currentState->FixedUpdate(cumulativeT);
				cumulativeT = 0.f;
			}

			currentState->Update(dt);

			window->clear(sf::Color::Black);
			currentState->Draw();
			window->display();
		}
	}
}

void sge::StateManager::PushState(State* s)
{
	if (s != nullptr)
	{
		_states.push_back(s);
	}
}

void sge::StateManager::ChangeState(State* s)
{
	if (s != nullptr)
	{
		State* prevs = PopState();
		delete prevs;
		PushState(s);
	}
}

sge::State* sge::StateManager::PopState()
{
	State* result = nullptr;
	int len = _states.size();

	if (len > 0)
	{
		result = _states[len - 1];
		_states.pop_back();
	}

	return result;
}

sge::State* sge::StateManager::PeekState()
{
	State* result = nullptr;
	int len = _states.size();

	if (len > 0)
	{
		result = _states[len - 1];
	}

	return result;
}
