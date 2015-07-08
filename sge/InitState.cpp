#include <string>

#include "InitState.hpp"
#include "StateManager.hpp"

#include "Car.hpp"
#include "GraphicsComponent.hpp"

sge::InitState::InitState(sge::StateManager* m)
{
	_manager = m;
	Car * c = new Car;
	GraphicsComponent& gcomp = _graphics.CreateComponent(std::string("CircleComp"));
	c->AddComponent(&gcomp);
	_actors.push_back(c);
}

void sge::InitState::HandleInput(sf::Event& e)
{
}

void sge::InitState::Update(float dt)
{
}

void sge::InitState::Draw()
{
	_graphics.Draw(*_manager->window);
}