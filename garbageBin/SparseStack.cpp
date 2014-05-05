
#include "SparseStack.h"

void SparseStack::push(Integer i, Object *obj)
{
	Index.push_back(i);
	Context.push_back(obj);
}

void SparseStack::pop(Integer i, Object *obj)
{
	
}

Object *SparseStack::mapvalue(Integer i)
{
	int floorvalue = 0;
	/*
		The index vector must be sorted!
		From little -> large
	*/
	for(unsigned int indx = 0; indx < Index.size(); ++indx)
	{
		if(Index[indx] <= i)
		{
			floorvalue = indx;
		}
	}

	return Context[floorvalue];
}








