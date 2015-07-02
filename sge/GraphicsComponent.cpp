#include "GraphicsComponent.hpp"
#include "GameObject.hpp"

void sge::GraphicsComponent::Draw(sf::RenderTarget& target)
{
	target.draw(_shape);
}

void sge::GraphicsComponent::Update(float dt)
{
	this->_shape.setPosition(this->_parent->_pos._x, this->_parent->_pos._y);
}