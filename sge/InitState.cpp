#include "InitState.hpp"

sge::InitState::InitState(sge::StateManager* m)
{
	// get a reference to the manager
	_manager = m;

	// set up the camera for the scene
	sf::Vector2f size(_manager->window->getSize().x, _manager->window->getSize().y);
	_camera = new sf::View(sf::Vector2f(0,0), size);
	_manager->window->setView(*_camera);

	// create our objects and add them to our list of objects
	Car * c = new Car;

	// make components
	std::string n = "GraphicsComponent";
	GraphicsComponent* gcomp = _graphics.CreateComponent(n, c);
	RigidBodyComponent* rcomp = _physics.CreateComponent(c);

	c->AddComponent(rcomp);
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

void sge::InitState::FixedUpdate(float dt)
{
}

void sge::InitState::Update(float dt)
{
}

void sge::InitState::Draw()
{
	_graphics.Draw(*_manager->window);
}