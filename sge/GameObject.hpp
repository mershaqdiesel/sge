#ifndef __SGE_GAMEOBJECT
#define __SGE_GAMEOBJECT

#include "Vector2f.hpp"

namespace sge
{

	class GameObject
	{
	public:
		GameObject();

	protected:
		Vector2f _pos;	
	};
}

#endif