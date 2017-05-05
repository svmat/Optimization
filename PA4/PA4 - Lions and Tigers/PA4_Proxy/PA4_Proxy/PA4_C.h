//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef PA4_C_H
#define PA4_C_H

#define PROXY_ENABLE 1  // use this toggle to flip back and forth with your proxies

class Vect2D
{
public:
	
	// default constructor
	Vect2D()
		: x(0.0f), y(0.0f)
	{
	};


	// destructor
	~Vect2D()
	{
	};

	Vect2D(const float x_, const float y_)
		: x(x_), y(y_)
	{

	}

	// set functions
	void setX( const float inX )
	{
		this->x = inX;
	};

	void setY( const float inY )
	{
		this->y = inY;
	};

	void set( const float inX, const float inY )
	{
		this->x = inX;
		this->y = inY;
	};

	float getX() const
	{
		return this->x;
	};

    float getY() const
	{
		return this->y;
	};

	//*********************************************************************
	// Convert these methods to proxys
	//*********************************************************************
#if !PROXY_ENABLE
	Vect2D operator + ( const Vect2D &tmp ) const;
#endif

private:
	float x;
	float y;
	template <typename T> Vect2D(const T x, const T y);


};

struct VaddV
{
	const Vect2D& v1;
	const Vect2D& v2;
	VaddV(const Vect2D& tmp1, const Vect2D& tmp2)
		: v1(tmp1), v2(tmp2) {};

	operator Vect2D()
	{
		return Vect2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
	};
	VaddV& operator=(const VaddV&)
	{
		return *this;
	};

};

struct VaddVaddV
{
	const Vect2D& v1;
	const Vect2D& v2;
	const Vect2D& v3;
	VaddVaddV(const VaddV& tmp1, const Vect2D& tmp2)
		: v1(tmp1.v1), v2(tmp1.v2), v3(tmp2) {};

	operator Vect2D()
	{
		return Vect2D(v1.getX() + v2.getX() + v3.getX(), v1.getY() + v2.getY() + v3.getY());
	};

	VaddVaddV& operator=(const VaddVaddV&)
	{
		return *this;
	};

};

struct VaddVaddVaddV
{
	const Vect2D& v1;
	const Vect2D& v2;
	const Vect2D& v3;
	const Vect2D& v4;
	VaddVaddVaddV(const VaddVaddV& tmp1, const Vect2D& tmp2)
		: v1(tmp1.v1), v2(tmp1.v2), v3(tmp1.v3), v4(tmp2) {};

	operator Vect2D()
	{
		return Vect2D(v1.getX() + v2.getX() + v3.getX() + v4.getX(), v1.getY() + v2.getY() + v3.getY() + v4.getY());
	};

	VaddVaddVaddV& operator=(const VaddVaddVaddV&)
	{
		return *this;
	};

};

VaddVaddV operator + (const VaddV& vv1, const Vect2D& v2);

#if PROXY_ENABLE
VaddV operator + (const Vect2D &A, const Vect2D &B);

VaddVaddV operator + (const VaddV& vv1, const Vect2D& v2);

VaddVaddVaddV operator + (const VaddVaddV& vv1, const Vect2D& v2);

#endif
#endif