#include "GraphicsComponent.hpp"

sge::GraphicsComponent::GraphicsComponent(sge::GameObject* o) : 
    Component("GraphicsComponent", o),
    _shape(10.0f)
{
    _shape.setFillColor(sf::Color::Green);
}


void sge::GraphicsComponent::Draw(sf::RenderTarget& target)
{
	_shape.setPosition(_parent->pos.x, _parent->pos.y);
	target.draw(_shape);
}
