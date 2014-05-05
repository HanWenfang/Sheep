#include "SparseStack.h"
#include "Integer.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	SparseStack ss_test;
	Integer index1(1);
	Integer context1(19);

	Integer index2(10);
	Integer context2(29);

	ss_test.push(index1, &context1);
	ss_test.push(index2, &context2);

	Integer tempi(6);
	Integer *tempc = (Integer *)ss_test.mapvalue(tempi);

	cout << "tempc: " << tempc->int_value() << endl;
	return 0;
}


