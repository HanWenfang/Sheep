/*
	We use SparseStack to support the data compress!

*/

#ifndef SHEEP_SPARSESTACK_H
#define SHEEP_SPARSESTACK_H

#include <vector>
#include "Object.h"
#include "Integer.h"

using std::vector;

/*
	You should insert sortedly:
		push(1, "201501")
		push(2, "201502")
		push(9 "201509")
*/
class SparseStack : public Object
{
public:
	vector<Integer> Index;
	/*
		String, Integer 
	*/
	vector<Object *> Context;

	void push(Integer i, Object *obj);
	void pop(Integer i, Object *obj);
	Object *mapvalue(Integer i);
};




#endif
