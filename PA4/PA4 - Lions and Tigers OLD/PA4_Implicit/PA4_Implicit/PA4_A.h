//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef PA4_A_H
#define PA4_A_H

#define IMPLICIT_CONVERSIONS 0   // toggle me to see performance differences
#define DETECT_IMPLICIT_CONVERSIONS 1  // toggle me to generate errors instead of warnings

class Vect
{
public:
	//*********************************************************************
	// The Givens:  Always define these four
	//*********************************************************************

		// default constructor
		Vect()
		: x(0.0f), y(0.0f), z(0.0)
	{
	};

		// copy constructor
		Vect( const Vect &tmp)
			: x(tmp.x), y(tmp.y), z(tmp.z)
		{
		};

		// assignment vector
		const Vect & operator = (const Vect &tmp )
		{
			this->x = tmp.x;
			this->y = tmp.y;
			this->z = tmp.z;

			return *this;
		};

		// destructor
		~Vect()
		{
		};

	//*********************************************************************
	// Methods and operators that have take implicit conversions
	// These are the functions you need to prevent implicit conversion:
	//*********************************************************************

	// overload constructor
	Vect( const float inX, const float inY, const float inZ )
		: x(inX), y(inY), z(inZ)
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

	void setZ( const float inZ )
	{
		this->z = inZ;
	};

	void set( const float inX, const float inY, const float inZ )
	{
		this->x = inX;
		this->y = inY;
		this->z = inZ;
	};

	float getX()
	{
		return this->x;
	};

	float getY()
	{
		return this->y;
	};

	float getZ()
	{
		return this->z;
	};

	Vect operator + (const Vect tmp ) const
	{
		return ( Vect(this->x + tmp.x, this->y + tmp.y, this->z + tmp.z ) );

	}


private:
	float x;
	float y;
	float z;
	
	template <typename T> Vect(const T inX, const T inY, const T inZ)
		: x(inX), y(inY), z(inZ)
	{
	};
	template <typename T> void setX(const T)
	{
		this->x = inX;
	};
	template <typename T> void setY(const T)
	{
		this->y = inY;
	};
	template <typename T> void setZ(const T)
	{
		return this->z;
	};
	template <typename T> void set(const T x,const T y,const T z)
	{
		this->x = inX;
		this->y = inY;
		this->z = inZ;
	};

};

#endif