#ifndef __SGE_COMPONENT
#define __SGE_COMPONENT

#include <string>

namespace sge
{
	class GameObject;

	class Component
	{
	public:
		Component(const std::string& s, GameObject* obj) : _name(s) { _parent = obj; };
		virtual ~Component() {};

		virtual void Update(float dt) {};

        virtual const std::string& GetName() { return _name; };

	protected:
		GameObject* _parent;
        const std::string _name;
	};
}

#endif
