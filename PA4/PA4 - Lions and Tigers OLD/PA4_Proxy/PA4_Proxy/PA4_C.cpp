//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#include "PA4_C.h"

Vect2D Vect2D::operator + ( const Vect2D &tmp ) const
{
	Vect2D sum;

	sum.x = this->x + tmp.x;
	sum.y = this->y + tmp.y;

	return ( sum );
};

