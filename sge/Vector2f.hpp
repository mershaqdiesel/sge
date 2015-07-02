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
		inline Vector2f()	{_x = _y = 0.f;};
		inline Vector2f(float x, float y)	{ _x = x; _y = y; };
		inline ~Vector2f()	{};
		inline Vector2f(const Vector2f& rhs) { _x = rhs._x; _y = rhs._y; };

		float _x, _y;
	};
}

#endif