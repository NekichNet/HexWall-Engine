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
		Vector(const iLine& line);

		void cord(AXIS axis, int value);
		int cord(AXIS axis) const;
		void x(int value);
		int x() const;
		void y(int value);
		int y() const;
		void z(int value);
		int z() const;
		void q(int value);
		int q() const;

		const Straight& toLine() const;
		const Point& toPoint() const;

		void fromLine(const Straight& line);
		void fromPoint(const Point& point);

		friend const Vector& operator+(const Vector& a, const Vector& b);
		friend const Vector& operator+(const Vector& a, int b);
		friend const Vector& operator+(int a, const Vector& b);

		friend const Vector& operator-(const Vector& a, const Vector& b);
		friend const Vector& operator-(const Vector& a, int b);
		friend const Vector& operator-(int a, const Vector& b);

		friend const Vector& operator*(const Vector& a, const Vector& b);
		friend const Vector& operator*(const Vector& a, int b);
		friend const Vector& operator*(int a, const Vector& b);

		friend const Vector& operator/(const Vector& a, const Vector& b);
		friend const Vector& operator/(const Vector& a, int b);
		friend const Vector& operator/(int a, const Vector& b);

		Vector& operator+=(const Vector& other);
		Vector& operator+=(int other);

		Vector& operator-=(const Vector& other);
		Vector& operator-=(int other);

		Vector& operator*=(const Vector& other);
		Vector& operator*=(int other);

		Vector& operator/=(const Vector& other);
		Vector& operator/=(int other);

		Vector& operator++();
		Vector& operator++(int);

		Vector& operator--();
		Vector& operator--(int);
	private:
		int x_, y_, z_, q_;
	};
}

#endif // !VECTOR_HPP