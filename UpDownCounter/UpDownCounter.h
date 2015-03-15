#ifndef UPDOWNCOUNTER_H
#define UPDOWNCOUNTER_H

class UpDownCounter
{
public:
	UpDownCounter(); // default constructor
	UpDownCounter(int, int, int, int); // constructor
	~UpDownCounter(); // destructor
	int getvalue();
	
	void operator++(); // prefix increment
	void operator++(int); // postfix increment
	void operator--(); // prefix decrement
	void operator--(int); // postfix decrement

private:
	int minValue;
	int maxValue;
	int increment;
	int decrement;
	int cValue;
};
#endif