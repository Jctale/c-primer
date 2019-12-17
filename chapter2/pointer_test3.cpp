#include <iostream>

using namespace std;
int main()
{
	const double pi = 3.14;
	//double *ptr = &pi;        // error: ptr is a plain pointer 
	const double *cptr = &pi; 
	// pointer to const 
	//(the pointer thinks it point to a const, which can be false in reality)
	// may not be used to change the object to which the pointer points
	double dval = 3.1;
	cout<<*cptr<<endl;
	cptr = &dval;
	cout<<*cptr<<endl;
	//*cptr = 3.87;  //illegal 

	int errNumb = 0;
	int *const curErr = &errNumb;//const pointer once initialized,
	// its value (i.e., the address that it holds) may not be changed
	// underlying obj can be change
	*curErr = 1;

	cout<<errNumb<<endl;
	const double pi2 = 3.1415;
	const double *const pip = &pi;//const pointer to const obj both can't change
}