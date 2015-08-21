#ifndef __SGE_COMPONENT
#define __SGE_COMPONENT

#include <string>

namespace sge
{
	class GameObject;

	class Component
	{
	public:
		Component(GameObject* obj) { _parent = obj; };
		virtual ~Component() {};

		virtual void Update(float dt) {};

        virtual const std::string& GetName() { return _name; };

	protected:
		GameObject* _parent;
        std::string _name;

        virtual void SetName(const std::string& n) { _name = n; };
	};
}

#endif
