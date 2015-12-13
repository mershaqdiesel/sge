#ifndef __SGE_BEHAVIOURSYSTEM
#define __SGE_BEHAVIOURSYSTEM

#include <vector>

#include "System.hpp"
#include "Behaviour.hpp"

namespace sge
{
	class BehaviourSystem : public System
	{
	public:
		BehaviourSystem();
		~BehaviourSystem();

		void Start();
		void Update(float dt);
		void Stop();

	private:
		std::vector<Behaviour> _comps;
	};
}

#endif // __SGE_BEHAVIOURSYSTEM