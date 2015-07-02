#include "GraphicsSystem.hpp"

void sge::GraphicsSystem::Start()
{
	_window.setTitle("sge window");
}

void sge::GraphicsSystem::Stop()
{

}

void sge::GraphicsSystem::Update(float dt)
{
	_window.clear();

	for (auto comp : _drawableComps)
	{
		comp->Draw(_window);
	}

	_window.display();
}