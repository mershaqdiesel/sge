#include "GraphicsComponent.hpp"

sge::GraphicsComponent::GraphicsComponent(sge::GameObject* o) : 
    Component("GraphicsComponent", o),
    _shape(10.0f)
{
    _shape.setFillColor(sf::Color::Green);
}


void sge::GraphicsComponent::Draw(sf::RenderTarget& target)
{
	sf::Transformable t = _parent->GetTransform();
	_shape.setPosition(t.getPosition());
	_shape.setRotation(t.getRotation());
	_shape.setScale(t.getScale());
	target.draw(_shape);
}
