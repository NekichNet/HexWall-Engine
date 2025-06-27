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

		Vector(const Vector& other)
			: x_(other.x_), y_(other.y_), z_(other.z_), q_(other.q_) {}
		Vector(Vector&& other)
			: x_(other.x_), y_(other.y_), z_(other.z_), q_(other.q_) {}

		Vector& cord(AXIS axis, int value);
		int cord(AXIS axis) const;
		Vector& x(int value);
		int x() const;
		Vector& y(int value);
		int y() const;
		Vector& z(int value);
		int z() const;
		Vector& q(int value);
		int q() const;

		Line toLine() const;
		Point toPoint() const;

		void fromLine(const Line& line, bool head_to_start = false);
		void fromPoint(const Point& point);

		Vector& length(unsigned int value);
		unsigned int length() const;

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
		int x_, y_, z_, q_;
	};
}

#endif // !VECTOR_HPP