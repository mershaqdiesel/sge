#ifndef _SGE_PHYSICSSYSTEM
#define _SGE_PHYSICSSYSTEM

#include <vector>

#include "GameObject.hpp"
#include "RigidBodyComponent.hpp"
#include "System.hpp"

namespace sge
{
	class RigidBodyComponent;

	class PhysicsSystem : public System
	{
	public:
		PhysicsSystem();
		~PhysicsSystem();

		void Start();
		void Update(float dt);
		void Stop();

		RigidBodyComponent* CreateComponent(GameObject *obj);

	private:
		std::vector<RigidBodyComponent*> _rigidBodies;
	};
}

#endif