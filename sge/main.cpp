#include <iostream>

#include "StateManager.hpp"
#include "InitState.hpp"

using namespace sge;
using namespace std;

int main(int argc, char* argv[])
{
	StateManager manager;

    cout << "begin init" << endl;
	manager.Init();
	cout << "end init" << endl;

    cout << "begin pushstate" << endl;
	manager.PushState(new InitState(&manager));
	cout << "end pushstate" << endl;

    cout << "begin run" << endl;
	manager.Run();
	cout << "end run" << endl;

    cout << "begin teardown" << endl;
	manager.Teardown();
	cout << "end teardown" << endl;

	return 0;
}
