#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "../Point/Point.hpp"
#include "../Line/Line.hpp"
#include "../Axis.hpp"

namespace geom {
	struct Vector {
	public:
		Vector(int x, int y, int z, int q)
			: x_(x), y_(y), z_(z), q_(q) {}
		Vector(const Point& point);
		Vector(const Point& start, const Point& end);
		Vector(const Line& line, bool head_to_start=false);

		const Vector& cord(AXIS axis, int value);
		int cord(AXIS axis) const;
		const Vector& x(int value);
		int x() const;
		const Vector& y(int value);
		int y() const;
		const Vector& z(int value);
		int z() const;
		const Vector& q(int value);
		int q() const;

		const Line& toLine() const;
		const Point& toPoint() const;

		void fromLine(const Line& line, bool head_to_start = false);
		void fromPoint(const Point& point);

		const Vector& distance(unsigned int value);
		unsigned int distance() const;

		friend const Vector& operator+(const Vector& a, const Vector& b);
		friend const Vector& operator+(const Vector& a, int b);
		friend const Vector& operator+(int a, const Vector& b);

		friend const Vector& operator-(const Vector& a, const Vector& b);
		friend const Vector& operator-(const Vector& a, int b);
		friend const Vector& operator-(int a, const Vector& b);

		friend const Vector& operator*(const Vector& a, const Vector& b);
		friend const Vector& operator*(const Vector& a, float b);
		friend const Vector& operator*(float a, const Vector& b);

		friend const Vector& operator/(const Vector& a, const Vector& b);
		friend const Vector& operator/(const Vector& a, int b);
		friend const Vector& operator/(int a, const Vector& b);

		Vector& operator+=(const Vector& other);
		Vector& operator+=(int other);

		Vector& operator-=(const Vector& other);
		Vector& operator-=(int other);

		Vector& operator*=(const Vector& other);
		Vector& operator*=(float other);

		Vector& operator/=(const Vector& other);
		Vector& operator/=(float other);
	private:
		int x_, y_, z_, q_;
	};
}

#endif // !VECTOR_HPP