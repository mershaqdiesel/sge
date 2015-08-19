#include "Vector2f.hpp"

namespace sge
{
    Vector2f operator+(const Vector2f& lhs, const Vector2f& rhs)
    {
        Vector2f v(lhs.x + rhs.x, lhs.y + rhs.y);
    	return v;
    }
   
    Vector2f operator*(const float a, const Vector2f& rhs)
    {
        Vector2f v(rhs.x * a, rhs.y *a);
    	return v;
    }
    
    Vector2f operator*(const Vector2f& lhs, const float a)
    {
        Vector2f v(lhs.x * a, lhs.y *a);
    	return v; 
    }
}
