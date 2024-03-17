#include "cBfield.h"
#include <iostream>
#include <cmath>

namespace vec3 {
	double Vector::dot(const Vector& v) const 
	{
		return (x * v.x) + (y * v.y) + (z * v.z);
	}

	Vector Vector::cross(const Vector& v) const 
	{
		return { y * v.z - v.y * z,  
				-(x * v.z - v.x * z),
				x * v.y - v.x * y};
	}

	Vector Vector::plus(const Vector& v) const 
	{
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector Vector::operator+(const Vector& v) const 
	{
		return this->plus(v);
	}

	Vector Vector::times(const double& k) const
	{
		return { k * x, k * y, k * z };
	}

	Vector Vector::divided(const double& k) const
	{
		return { x/k, y/k, z/k };
	}

	Vector Vector::operator*(const double& k) const
	{
		return this->times(k);
	}

	double Vector::operator*(const Vector& v) const {
		return this->dot(v);
	}

	Vector Vector::operator/(const double& k) const
	{
		return this->divided(k);
	}

	double Vector::magnitude2() const
	{
		return this->dot(*this);
	}

	double Vector::magnitude() const
	{
		return sqrt(this ->magnitude2());
	}

	double Vector::magnitude3() const 
	{
		double mag = magnitude();
		return mag * mag * mag;
	}

}

vec3::Vector operator^(const vec3::Vector& v1, const vec3::Vector& v2) {
	return v1.cross(v2);
}

std::ostream& operator<<(std::ostream& stream, const vec3::Vector& v) {
	stream << "Vector { " << v.x << " " << v.y << " " << v.z << "}";
	return stream;
}

namespace hfld {

	Methods::Methods(double start, double end, double resolution, double precision, double a, double I) : p({ start,end,resolution,precision }), a(a), I(I) {
		std::cout << "Successfully created new instance of Methods via double inputs\n";
	}
	Methods::Methods(param P, double a, double I) : p(p), a(a), I(I) {
		std::cout << "Successfully created new instance of Methods via param\n";
	}
	void Methods::by_vector_differential() const {
		vec3::Vector B{}, dB{}, dL{}, r{};

		for (double beta = p.a; beta <= p.b; beta += p.resolution) {
			B = {0,0,0};
			for (double theta = 0; theta < pi; theta += p.precision) {
				dL = vec3::Vector{-1 * sin(theta), cos(theta), 0} *p.precision;
				r = {beta - cos(theta), -1 * sin(theta), 0};
				dB = (dL ^ r) / r.magnitude3();
				B = B + dB;
			}
			B = B *2 *  I * K / a;
			std::cout << "(" << beta << ", " << B << ")\n";
		}

	}

	param Methods::getParam() const {
		return p;
	}
	double Methods::getRadius() const {
		return a;
	}
	double Methods::getCurrent() const {
		return I;
	}


}


