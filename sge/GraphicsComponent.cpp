#include "GraphicsComponent.hpp"
#include "GameObject.hpp"

void sge::GraphicsComponent::Draw(sf::RenderTarget& target)
{
	_shape.setPosition(_parent->pos.x, _parent->pos.y);
	target.draw(_shape);
}