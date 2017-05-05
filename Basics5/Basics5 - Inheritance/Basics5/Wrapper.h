//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef WRAPPER_H
#define WRAPPER_H

#include "MiddlewareNative.h"


// ----------------------------------------------------------------------
//
// Rules: 
// For this problem, you are wrapping a poor interface provided by the middleware vendors
// Feel free to modify and add to this class
//
// The class needs to derive privately from Vect2D_Native
//
// Requirements:
//
// 1) variables:  x, y should be private
// 2) prevent methods setID() and getID() from being called
// 3) Rework getX() and getY() to take float references
// 4) prevent the original getX() and getY() from being called
// 5) allow setX() and setY() to be called as is.
//
// The unit test has a section that is #if 0 - toggle it to make sure your code is producing the correct errors
//
// ----------------------------------------------------------------------

class GameVect: private Vect2D_Native
{
public:
	void getX(float& xRef)
	{
		xRef = Vect2D_Native::getX();
	};
	void getY(float& yRef)
	{
		yRef = Vect2D_Native::getY();
	};
	void setX(float fx)
	{
		Vect2D_Native::setX(fx);
	};
	void setY(float fy)
	{
		Vect2D_Native::setY(fy);
	};
	

private:
	float x;
	float y;
	void setID(int val)
	{
		Vect2D_Native::setID(val);
	};
	int getID()
	{
		Vect2D_Native::getID();
	};
	float getX()
	{
		Vect2D_Native::getX();
	};
	float getY()
	{
		Vect2D_Native::getY();
	};


};


#endif