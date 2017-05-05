//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#include "PA4_C.h"
#if !PROXY_ENABLE
Vect2D Vect2D::operator + ( const Vect2D &tmp ) const
{
	Vect2D sum;

	sum.x = this->x + tmp.x;
	sum.y = this->y + tmp.y;

	return ( sum );
};

#else
VaddV operator+(const Vect2D & A, const Vect2D & B)
{
	return VaddV(A,B);
}

VaddVaddV operator + (const VaddV& vv1, const Vect2D& v2)
{
	return VaddVaddV(vv1, v2);
}

VaddVaddVaddV operator + (const VaddVaddV& vvv1, const Vect2D& v2) {
	return VaddVaddVaddV(vvv1, v2);
}

#endif