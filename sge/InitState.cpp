#include "InitState.hpp"

sge::InitState::InitState(sge::StateManager* m)
{
	_manager = m;
	Car * c = new Car;
	std::string n = "GraphicsComponent";
	GraphicsComponent* gcomp = _graphics.CreateComponent(n, c);
	c->AddComponent(gcomp);
	_actors.push_back(c);
}

void sge::InitState::HandleInput(sf::Event& e)
{
    for (auto a : _actors)
    {
        a->HandleInput(e);
    }
}

void sge::InitState::Update(float dt)
{
}

void sge::InitState::Draw()
{
	_graphics.Draw(*_manager->window);
}
