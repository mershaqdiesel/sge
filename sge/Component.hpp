#ifndef __SGE_COMPONENT
#define __SGE_COMPONENT

namespace sge
{
	class GameObject;

	class Component
	{
	public:
		Component(sge::GameObject* obj) { _parent = obj; }
		virtual ~Component() = 0;
		virtual void Update(float dt) = 0;

	protected:
		sge::GameObject* _parent;
	};
}

#endif