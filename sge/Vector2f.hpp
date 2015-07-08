#ifndef __SGE_VECTOR2F
#define __SGE_VECTOR2F

namespace sge
{
	class Vector2f
	{
		friend Vector2f operator+(const Vector2f& lhs, const Vector2f& rhs);
		friend Vector2f operator*(const int a, const Vector2f& rhs);
		friend Vector2f operator*(const Vector2f& lhs, const int a);

	public:
		inline Vector2f()	{x = y = 0.f;};
		inline Vector2f(float newx, float newy)	{ x = newx; y = newy; };
		inline ~Vector2f()	{};
		inline Vector2f(const Vector2f& rhs) { x = rhs.x; y = rhs.y; };

		float x, y;
	};
}

#endif