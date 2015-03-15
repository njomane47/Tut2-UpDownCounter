#include <iostream>
#include "UpDownCounter.h"
using namespace std;

UpDownCounter::UpDownCounter()  // default constructor
{
	minValue = 0; // minimum limit
	maxValue = 255;//maximum limit
	cValue = 0; // current value of our counter
}

UpDownCounter::UpDownCounter(int min, int max,int decr,int incr)
{
	minValue = min;
	maxValue = max;
	increment = incr;
	decrement = decr;
	cValue = 0;
}

UpDownCounter::~UpDownCounter()
{

}

int UpDownCounter::getvalue()
{
	return cValue;
}

void UpDownCounter::operator++() //prefix increment
{
	cValue += 1;
	if (cValue>maxValue)
	{
		cValue = maxValue;
	}
}

void UpDownCounter::operator++(int a) // postfix increment
{
	cValue += 1;
	if (cValue>maxValue)
	{
		cValue = maxValue;
	}
}

void UpDownCounter::operator--() // prefix decrement
{
	cValue -= 1;
	if (cValue<minValue)
	{
		cValue = minValue;
	}
}

void UpDownCounter::operator--(int b) // postfix decrement
{
	cValue -= 1;
	if (cValue<minValue)
	{
		cValue = minValue;
	}
}

