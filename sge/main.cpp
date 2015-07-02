#include "StateManager.hpp"
#include "InitState.hpp"

using namespace sge;

int main(int argc, char* argv[])
{
	StateManager manager;

	manager.Init();

	manager.PushState(new InitState(&manager));

	manager.Run();

	manager.Teardown();

	return 0;
}