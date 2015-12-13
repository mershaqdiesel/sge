#ifndef _SGE_RIGIDBODYCOMPONENT
#define _SGE_RIGIDBODYCOMPONENT

#include <SFML/System.hpp>

#include "Component.hpp"
#include "PhysicsSystem.hpp"

namespace sge
{
	class RigidBodyComponent : public Component
	{
	public:
		friend class PhysicsSystem;

		RigidBodyComponent(GameObject* obj);

	private:
		float _mass;
		float _drag;
		float _angularVel;
		float _angularDrag;
		sf::Vector2f _vel;
		sf::Vector2f _acc;
	};
}

#endif // _SGE_RIGIDBODYCOMPONENT