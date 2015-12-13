#ifndef __SGE_BEHAVIOUR
#define __SGE_BEHVAIOUR

#include "Component.hpp"

namespace sge
{
	class Behaviour : public Component
	{
	public:
		Behaviour(GameObject* obj);
		virtual ~Behaviour()=0;

		virtual void Begin() {};
		virtual void End() {};
		virtual void Update(float dt) {};
	};
}

#endif // __SGE_BEHVARIOUR