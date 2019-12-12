#include <iostream>

using namespace std;

int main()
{
	int ival = 1024;
	// a reference is not an obj. is another name for an existing obj
	int &refVal = ival;// refVal refers to ival
	//int &ref_val2; // reference must be initialized
	refVal = 2;
	int ii = refVal; // same as ii = ival
	int &refVal3 = refVal;
	refVal3 = 87;
	cout<< ival <<endl;
}