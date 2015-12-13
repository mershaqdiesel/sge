#include "PhysicsSystem.hpp"

sge::PhysicsSystem::PhysicsSystem()
{

}


sge::PhysicsSystem::~PhysicsSystem()
{
	for (auto rigidBody : _rigidBodies)
	{
		if (rigidBody)
		{
			delete rigidBody;
		}
	}
}

void sge::PhysicsSystem::Start()
{

}

void sge::PhysicsSystem::Update(float dt)
{

}

void sge::PhysicsSystem::Stop()
{

}

sge::RigidBodyComponent* sge::PhysicsSystem::CreateComponent(GameObject *obj)
{
	RigidBodyComponent *rigidBody = new RigidBodyComponent(obj);
	_rigidBodies.push_back(rigidBody);
	return rigidBody;
}