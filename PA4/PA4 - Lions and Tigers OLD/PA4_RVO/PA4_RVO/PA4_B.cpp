//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#include "PA4_B.h"

#if RVO_ENABLE
// new code
Vect2D Vect2D::operator + (const Vect2D &tmp) const
{
	return Vect2D(this->x + tmp.x, this->y + tmp.y);
};

Vect2D Vect2D::operator - (const Vect2D &tmp) const
{
	return Vect2D(this->x - tmp.x, this->y - tmp.y);
};

Vect2D Vect2D::operator * (const float scale) const
{
	return Vect2D(this->x * scale, this->y * scale);
};

Vect2D Vect2D::operator / (const float scale) const
{
	return Vect2D(this->x / scale, this->y / scale);
};
#else
// old code
Vect2D Vect2D::operator + ( const Vect2D &tmp ) const
{
	Vect2D sum;

	sum.x = this->x + tmp.x;
	sum.y = this->y + tmp.y;

	return ( sum );
};

Vect2D Vect2D::operator - ( const Vect2D &tmp ) const
{
	Vect2D sum;

	sum.x = this->x - tmp.x;
	sum.y = this->y - tmp.y;

	return ( sum );
};

Vect2D Vect2D::operator * ( const float scale ) const
{
	Vect2D tmp;

	tmp.x = this->x * scale;
	tmp.y = this->y * scale;

	return ( tmp );
};

Vect2D Vect2D::operator / ( const float scale ) const
{
	Vect2D tmp;

	tmp.x = x / scale;
	tmp.y = y / scale;

	return ( tmp );
};
#endif
