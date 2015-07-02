#ifndef __SGE_SYSTEM
#define __SGE_SYSTEM

namespace sge
{
	class System
	{
	public:
		virtual void Start() = 0;
		virtual void Update(float dt) = 0;
		virtual void Stop() = 0;
	};
}

#endif