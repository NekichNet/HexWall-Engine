#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

#include "../Point/Point3d/Point3d.hpp"
#include "../Line/Line3d/Line3d.hpp"
#include "../Axis3d.hpp"

namespace geom {
	struct Vector3d {
	public:
		Vector3d(int x, int y, int z) : x_(x), y_(y), z_(z) {}

		void cord(AXIS3D axis, int value);
		int cord(AXIS3D axis) const;
		void x(int value);
		int x() const;
		void y(int value);
		int y() const;
		void z(int value);
		int z() const;

		const Line3d& toLine() const;

		friend const Vector3d& operator+(const Vector3d& a, const Vector3d& b);
		friend const Vector3d& operator+(const Vector3d& a, int b);
		friend const Vector3d& operator+(int a, const Vector3d& b);

		friend const Vector3d& operator-(const Vector3d& a, const Vector3d& b);
		friend const Vector3d& operator-(const Vector3d& a, int b);
		friend const Vector3d& operator-(int a, const Vector3d& b);

		friend const Vector3d& operator*(const Vector3d& a, const Vector3d& b);
		friend const Vector3d& operator*(const Vector3d& a, int b);
		friend const Vector3d& operator*(int a, const Vector3d& b);

		friend const Vector3d& operator/(const Vector3d& a, const Vector3d& b);
		friend const Vector3d& operator/(const Vector3d& a, int b);
		friend const Vector3d& operator/(int a, const Vector3d& b);

		Vector3d& operator+=(const Vector3d& other);
		Vector3d& operator+=(int other);

		Vector3d& operator-=(const Vector3d& other);
		Vector3d& operator-=(int other);

		Vector3d& operator*=(const Vector3d& other);
		Vector3d& operator*=(int other);

		Vector3d& operator/=(const Vector3d& other);
		Vector3d& operator/=(int other);

		Vector3d& operator++();
		Vector3d& operator++(int);

		Vector3d& operator--();
		Vector3d& operator--(int);
	private:
		int x_, y_, z_;
	};
}

#endif // !VECTOR3D_HPP