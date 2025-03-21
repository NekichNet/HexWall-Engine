#include "../Point/Point3d/Point3d.hpp"

#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

namespace geom {
	struct Vector3d {
	public:
		Vector3d(int x, int y, int z) : x_(x), y_(y), z_(z) {}

		/*
		// get or set axis values
		int& operator[](const Axis3d& axis) noexcept;
		const int& operator[](const Axis3d& axis) const noexcept;
		*/

		void x(int value);
		int x() const;
		void y(int value);
		int y() const;
		void z(int value);
		int z() const;

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