#include "GraphicsSystem.hpp"

void sge::GraphicsSystem::Start()
{
}

void sge::GraphicsSystem::Stop()
{

}

void sge::GraphicsSystem::Update(float dt)
{
}

void sge::GraphicsSystem::Draw(sf::RenderTarget& t)
{
	for (size_t i = 0; i < _drawableComps.size(); ++i)
	{
		_drawableComps[i].Draw(t);
	}
}
