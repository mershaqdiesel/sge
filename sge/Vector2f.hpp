#ifndef __SGE_VECTOR2F
#define __SGE_VECTOR2F

namespace sge
{
	class Vector2f
	{
	public:
		inline Vector2f()	{x = y = 0.f;};
		inline Vector2f(float newx, float newy)	{ x = newx; y = newy; };
		inline ~Vector2f()	{};
		inline Vector2f(const Vector2f& rhs) { x = rhs.x; y = rhs.y; };
        inline Vector2f& operator+=(const Vector2f& rhs) { x += rhs.x; y += rhs.y; return *this; };
        inline Vector2f& operator*=(float f) { x *= f; y *= f; return *this; };

		float x, y;
	};

    Vector2f operator+(const Vector2f& lhs, const Vector2f& rhs);
   
    Vector2f operator*(const float a, const Vector2f& rhs);
    
    Vector2f operator*(const Vector2f& lhs, const float a);
}

#endif
