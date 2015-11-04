#include "Input.hpp"

sge::Input::Input()
{

}

sge::Input& sge::Input::Get()
{
	static Input instance;

	return instance;
}