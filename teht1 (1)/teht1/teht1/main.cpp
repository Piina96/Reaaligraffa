#include <stdio.h> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath>

#include "vec2.h" 
#include "vec3.h" 
#include "vec4.h"



// Toiseen korotusta varten funktio
template <typename T> 
inline T pow2(T x)
{
	return x * x;
}


// vektori luokka
class vec2 {

public:
	float x, y;

	vec2(float _x, float _y) : x(_x), y(_y)
	{
	}



	// summalasku
	vec2 operator+(const vec2 rhs)
	{
		return vec2(this->x + rhs.x, this->y + rhs.y);
	} 

	// vähennyslasku 
	vec2 operator-(const vec2 rhs)
	{
		return vec2(this->x - rhs.x, this->y - rhs.y); 
	} 
	
	// ristitulo 
	vec2 operator % (const vec2 rhs)
	{
		return vec2(this->x * rhs.y - this->y * rhs.x, this->y * rhs.x - this->x * rhs.y);
	} 
	// pituus 
	float len_sqr() const // x'x + y'y
	{
		return (this->x * x + this->y * y);   // Miten ??
	} 
	float len() const
	{
		return std::sqrt(len_sqr());
	}
	
}; 


class vec3
{
	double x, y, z; 

public: 
	vec3() : x(0), y(0), z(0){} 
	vec3(double _x, double _y, double _z) {}  

	vec3 operator+(const vec3 rhs)
	{
		return vec3(this->x + rhs.x, this->y + rhs.y, this->z + rhs.z);
	}

	vec3 operator-(const vec3 rhs)
	{
		return vec3(this->x - rhs.x, this->y - rhs.y, this->z - rhs.z);
	} 
	vec3 operator % (const vec3 rhs)
	{
		return vec3(
			y * rhs.z - z * rhs.y,
			z * rhs.x - x * rhs.z,
			x * rhs.y - y * rhs.x
		);
	} 

	double len_sqr() const
	{
		return (
			this->y * z + this->z * y,
			this->z * x + this->x * z,
			this->x * y + this->y * x
			);
	} 
	double len() const
	{
		return std::sqrt(len_sqr());
	}

}; 

class vec4
{
	double x, y, z, w;  

public: 
	vec4() : x(0), y(0), z(0), w(0){} 
	vec4(double _x, double _y, double _z, double _w) {} 

	vec4 operator+(const vec4 rhs)
	{
		return vec4(this->x + rhs.x, this->y + rhs.y, this->z + rhs.z, this->w + rhs.w);
	} 

	vec4 operator-(const vec4 rhs)
	{
		return vec4(this->x - rhs.x, this->y - rhs.y, this->z - rhs.z, this->w - rhs.w);
	}

	double len_sqr() const
	{
		return (
			this->z * w + this->w * z,
			this->w * y + this->y * w,
			this->y * x + this->x * y,
			this->x * w + this->w * x,
			this->x *z + this->z * x,
			this->z * y + this->y * z
			);
	}
};

int main()
{
	 

	std::cout << "Tehtävä 1 reaaliaikagrafiikkaohjelmoinnin tunneille: " << std::endl; 

	// vec2 nollavektori; 

	// vec2 a(1, 1, 1), b(1, 2, 3);
	
}

