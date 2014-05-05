/*
	We use SparseStack to support the data compress!

*/

#ifndef SHEEP_INTEGER_H
#define SHEEP_INTEGER_H
#include "Object.h"

class Integer : public Object
{
public:
	/*
		range: int
	*/
	Integer( int i): value(i) {}
	int value;

	bool operator == (Integer &ri){ 
		return value == ri.value;
	}

	bool operator <= (Integer &ri) {
		return value <= ri.value;
	}

	Integer &operator = (Integer &ri) {
		value = ri.value;
		return *this;
	}

	int int_value() {
		return value;
	}
};




#endif
