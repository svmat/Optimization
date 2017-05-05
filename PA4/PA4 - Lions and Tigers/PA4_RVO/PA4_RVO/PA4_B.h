//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef PA4_B_H
#define PA4_B_H

#define RVO_ENABLE 1  // toggle this to test

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
	// Convert these methods to Return Value Optimization
	//*********************************************************************

	Vect2D operator + (const Vect2D &tmp) const;
	Vect2D operator - (const Vect2D &tmp) const;
	Vect2D operator * (const float scale) const;
	Vect2D operator / (const float scale) const;


private:
	float x;
	float y;
	Vect2D(const float x, const float y)
	{
		this->x = x;
		this->y = y;
	};

};

#endif