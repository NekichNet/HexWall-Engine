#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "../Point/Point.hpp"
#include "../Line/Line.hpp"
#include "../Axis.hpp"

namespace HexGeometry {
	struct Vector {
	public:
		Vector()
			: _x(0), _y(0), _z(0), _q(0) {}
		Vector(const Point& point);
		Vector(const Point& start, const Point& end);
		Vector(const Line& line, bool head_to_start=false);

		Vector(const Vector& other)
			: _x(other._x), _y(other._y), _z(other._z), _q(other._q) {}
		Vector(Vector&& other)
			: _x(other._x), _y(other._y), _z(other._z), _q(other._q) {}

		Vector& cord(AXIS axis, int value);
		Vector& moveCord(AXIS axis, int value);
		int cord(AXIS axis) const;

		Vector& x(int value);
		Vector& moveX(int value);
		int x() const;

		Vector& y(int value);
		Vector& moveY(int value);
		int y() const;

		Vector& z(int value);
		Vector& moveZ(int value);
		int z() const;

		Vector& q(int value);
		Vector& moveQ(int value);
		int q() const;

		Line toLine() const;
		Point toPoint() const;

		void fromLine(const Line& line, bool head_to_start = false);
		void fromPoint(const Point& point);

		// Vector& length(unsigned int value);
		// unsigned int length() const;

		Vector& operator=(const Vector& other);
		Vector& operator=(Vector&& other) noexcept;

		friend Vector operator+(const Vector& a, const Vector& b);

		friend Vector operator-(const Vector& a, const Vector& b);

		friend Vector operator*(const Vector& a, const Vector& b);
		friend Vector operator*(const Vector& a, float b);

		friend Vector operator/(const Vector& a, const Vector& b);
		friend Vector operator/(const Vector& a, float b);

		Vector& operator+=(const Vector& other);

		Vector& operator-=(const Vector& other);

		Vector& operator*=(const Vector& other);
		Vector& operator*=(float other);

		Vector& operator/=(const Vector& other);
		Vector& operator/=(float other);
	private:
		int _x, _y, _z, _q;
	};
}

#endif // !VECTOR_HPP