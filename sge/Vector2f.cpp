#include "Vector2f.hpp"

inline sge::Vector2f sge::operator+(const sge::Vector2f& lhs, const sge::Vector2f& rhs)
{
	return sge::Vector2f(lhs.x + rhs.x, lhs.y + rhs.y);
}

inline sge::Vector2f sge::operator*(const int a, const sge::Vector2f& rhs)
{
	return sge::Vector2f(rhs.x * a, rhs.y *a);
}

inline sge::Vector2f sge::operator*(const sge::Vector2f& lhs, const int a)
{
	return sge::Vector2f(lhs.x * a, lhs.y *a);
}
