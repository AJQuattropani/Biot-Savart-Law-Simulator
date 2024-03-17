#pragma once
#include <iostream>

/*
* TODO
* - Complete interface.
* - Define constants in pre-processor.
* - Implement higher-precision data types.
* - Finish writeup for magnetic field mathematics.
* - Create calculator namespace which handles arrays of values and single values.
* - Figure
*/

namespace hfld {
	constexpr double pi = 3.14159265358979, K = 1;//1E-7;
	
	struct param {
		double a, b, resolution, precision;
	};

	class Methods {
		param p;
		double a, I;
	public:
		Methods(double start, double end, double resolution, double precision, double a=1, double I=1);
		Methods(param P, double a=1, double I=1);

		param getParam() const;
		double getRadius() const;
		double getCurrent() const;

		void by_vector_differential() const;
		void by_scalar_differential();
		void elliptical_series();
		void small_angle_approximation();
		void taylor_expansion(const int& order);
		void complex_expansion(const int& order);
		void euler_method(const double& rknown);
	};

	class Stats {
		const double r1;
		const double r2;
		void flux();
		void variance();
		void average();

	};
}

namespace vec3 {
	struct Vector {
		double x{ 0 }, y{ 0 }, z{ 0 };

		double dot(const Vector& v) const;

		Vector cross(const Vector& v) const;

		Vector plus(const Vector& v) const;

		Vector operator+(const Vector& v) const;

		Vector times(const double& k) const;

		Vector divided(const double& k) const;
		
		Vector operator*(const double& k) const;

		double operator*(const Vector& v) const;

		Vector operator/(const double& k) const;

		double magnitude2() const;

		double magnitude() const;

		double magnitude3() const;

	};

}

vec3::Vector operator^(const vec3::Vector& v1, const vec3::Vector& v2);

std::ostream& operator<<(std::ostream& stream, const vec3::Vector& v);
