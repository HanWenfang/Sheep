/*
	The base type
		1. leave it to gc
*/

#ifndef SHEEP_OBJECT_H
#define SHEEP_OBJECT_H

class Object
{
public:
	Object() {}
	~Object() {}

	virtual int int_value() { return 0; }
};




#endif
