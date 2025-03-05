#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

namespace geom {
	struct Vector3d {
	public:
		Vector3d(int x, int y, int z);

		int& operator[](const char& axis) noexcept; // get or set axis values
		const int& operator[](const char& axis) const noexcept;

		friend Vector3d& operator+(const Vector3d& a, const Vector3d& b);
		friend Vector3d& operator+(const Vector3d& a, int b);
		friend Vector3d& operator+(int a, const Vector3d& b);

		friend Vector3d& operator-(const Vector3d& a, const Vector3d& b);
		friend Vector3d& operator-(const Vector3d& a, int b);
		friend Vector3d& operator-(int a, const Vector3d& b);

		friend Vector3d& operator*(const Vector3d& a, const Vector3d& b);
		friend Vector3d& operator*(const Vector3d& a, int b);
		friend Vector3d& operator*(int a, const Vector3d& b);

		friend Vector3d& operator/(const Vector3d& a, const Vector3d& b);
		friend Vector3d& operator/(const Vector3d& a, int b);
		friend Vector3d& operator/(int a, const Vector3d& b);

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