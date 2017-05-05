//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Optimized C++
//----------------------------------------------------------------------------- 

#ifndef M_H
#define M_H

#define STUBBED_VAR(x) (void *)x

// ----------------------------------------------------------------------
//
// Rules: 
// Modify the classes to pass tests
// The class should be in a diamond inheritance pattern
// Only one variable in (M: a,b,c,d ) no duplicates or replicas
//
// Modify P overload constructor to pass test
// No body allowed in constructor
//
// ----------------------------------------------------------------------

class M
{
public:
	M()
	: a(11)
	{
	}

	M( int aVal )
	: a(aVal)
	{
	}

	void foo()
	{
	}

	int a;
};

class N : virtual public M
{
public:
	N()
	: b(22)
	{
	}
	N( int aVal, int bVal )
	: M(aVal), b(bVal)
	{
	}

	void foo()
	{
	}


	int b;

};


class O : virtual public M
{
public:
	O()
	: c(33)
	{
	}

	O( int aVal, int cVal )
	: M(aVal), c(cVal)
	{
	}

	void foo()
	{
	}

	int c;
};


class P: public N, public O
{
public:
	P()
	: d(44)
	{
	}

	P( int aVal, int bVal, int cVal, int dVal ) : M(aVal), N(aVal, bVal), O(aVal, cVal), d(dVal)
	{
	}

	void foo()
	{
	}

	int d;
};











#endif