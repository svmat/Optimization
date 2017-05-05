//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef C_H
#define C_H

#define STUBBED_VAR(x) (void *)x

// ----------------------------------------------------------------------
//
// Rules: 
// Cannot change anything in Class C
// Modify Class D's constructor to pass the class
//
// ----------------------------------------------------------------------

// -----------------------------------------------------
// DO NOT MODIFY Class C
// -----------------------------------------------------

class C
{
public:
	C()
	: x(33), y(44)
	{
	}

	C( int valX, int valY)
	: x(valX), y(valY)
	{
	}

	int getX()
	{
		return this->x;
	}

	int getY()
	{
		return this->y;
	}

private:
	int x;
	int y;
};

// -----------------------------------------------------
// MODIFY Class D's constructor to pass the test
// -----------------------------------------------------

class D : public C
{
public:
	D()
	: z(55)
	{
	}

	D( int xVal, int yVal, int zVal ): C(xVal,yVal), z(zVal)
	{
	}

	int getZ()
	{
		return this->z;
	}

private:
	int z;

};

#endif