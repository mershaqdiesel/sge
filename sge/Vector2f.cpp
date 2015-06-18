#include "Vector2f.hpp"

sge::Vector2f sge::operator+(const sge::Vector2f& lhs, const sge::Vector2f& rhs)
{
	sge::Vector2f ret(lhs._x + rhs._x, lhs._y + rhs._y);
	return ret;
}

sge::Vector2f sge::operator*(const int a, const sge::Vector2f& rhs)
{
	sge::Vector2f ret(rhs._x * a, rhs._y *a);
	return ret;
}

sge::Vector2f sge::operator*(const sge::Vector2f& lhs, const int a)
{
	sge::Vector2f ret(lhs._x * a, lhs._y *a);
	return ret;
}
