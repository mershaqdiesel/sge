#include "RigidBodyComponent.hpp"

sge::RigidBodyComponent::RigidBodyComponent(GameObject *obj) :
	Component("RigidBodyComponent", obj)
{
	_mass = 1.0f;
	_drag = 1.0f;
}