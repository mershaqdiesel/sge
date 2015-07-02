#include "Vector2f.hpp"

inline sge::Vector2f sge::operator+(const sge::Vector2f& lhs, const sge::Vector2f& rhs)
{
	return sge::Vector2f(lhs._x + rhs._x, lhs._y + rhs._y);
}

inline sge::Vector2f sge::operator*(const int a, const sge::Vector2f& rhs)
{
	return sge::Vector2f(rhs._x * a, rhs._y *a);
}

inline sge::Vector2f sge::operator*(const sge::Vector2f& lhs, const int a)
{
	return sge::Vector2f(lhs._x * a, lhs._y *a);
}
