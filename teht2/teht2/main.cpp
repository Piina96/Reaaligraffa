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


class mat4
{
	vec4 data[4];
public:  

	mat4(); 
	mat4::mat4(float v00, float v01, float v02, float v03
		float v04, float v05, float v06, float v07, 
		float v08, float v09, float v10, float v11, 
		float v12, float v13, float v14, float v15)
	{
		data[0][0] = v00;
		data[0][1] = v01; 
		data[0][2] = v02; 
		data[0][3] = v03; 
		data[0][4] = v04;
		data[0][5] = v05;
		data[0][6] = v06;
		data[0][7] = v07;
		data[0][8] = v08;
		data[0][9] = v09;
		data[1][0] = v10;
		data[1][1] = v11;
		data[1][2] = v12;
		data[1][3] = v13;
		data[1][4] = v14;
		data[1][5] = v15;
	}

	float det()
	{

	}

	mat4 transpose()
	{

	} 

	mat4 inverse()
	{

	}
	mat4 mat4::operator*(const mat4& o) const
	{

	} 
	mat4 mat4::operator*(const vec4& o) const
	{

	} 
	mat4 scaling(float s)
	{

	} 
	mat4 translation(const vec3& t)
	{

	} 
	mat4 rotationX(float a) {} 
	mat4 rotationY(float a) {} 
	mat4 rotationZ(float a) {}
};

int main()
{
	 

	std::cout << "Tehtävä 1 reaaliaikagrafiikkaohjelmoinnin tunneille: " << std::endl; 

	// vec2 nollavektori; 

	// vec2 a(1, 1, 1), b(1, 2, 3);
	
}

