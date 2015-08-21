#include "GameObject.hpp"
#include "Component.hpp"

bool sge::GameObject::AddComponent(Component* comp)
{
	Component* c = GetComponent(comp->GetName());
	if (c == nullptr)
	{
		_components.push_back(comp);
		return true;
	}
	return false;
}

sge::Component* sge::GameObject::GetComponent(const std::string& typeName)
{
	Component* c = nullptr;
	for (size_t i = 0; i < _components.size(); ++i)
	{
		if (_components[i]->GetName() == typeName)
		{
			c = _components[i];
		}
	}
	return c;
}
