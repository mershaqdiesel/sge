#ifndef __SGE_COMPONENT
#define __SGE_COMPONENT

#include <string>

namespace sge
{
	class GameObject;

	class Component
	{
	public:
		Component(GameObject* obj, std::string& name) { _parent = obj; Name = name; };
		virtual ~Component() {};

		virtual void Update(float dt) {};

		static std::string& Name;

	protected:
		GameObject* _parent;
	};
}

#endif