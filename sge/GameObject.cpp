#include "GameObject.hpp"
#include "Component.hpp"

bool sge::GameObject::AddComponent(Component* comp)
{
	Component* c = GetComponent(comp->Name);
	if (c == nullptr)
	{
		_components.push_back(comp);
		return true;
	}
	return false;
}

sge::Component* sge::GameObject::GetComponent(std::string typeName)
{
	Component* c = nullptr;
	for (int i = 0; i < _components.size(); ++i)
	{
		if (_components[i]->Name == typeName)
		{
			c = _components[i];
		}
	}
	return c;
}