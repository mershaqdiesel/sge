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
		_drawableComps[i]->Draw(t);
	}
}

sge::GraphicsComponent* sge::GraphicsSystem::CreateComponent(const std::string& type, const GameObject* obj)
{
    if (type.compare("GraphicsComponent") == 0)
    {
        GraphicsComponent* comp = new GraphicsComponent(const_cast<GameObject*>(obj));
        _drawableComps.push_back(comp);
        return comp;
    }
    
    return nullptr;
}
