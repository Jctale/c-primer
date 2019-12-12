/*
 Like references, pointers are used for indirect access to other objects.
 Unlike a reference, a pointer is an object in its own right.

*/
// primer p.85 fin
#include <iostream>

using namespace std;

int main()
{
	int ival = 15;
	int *p = &ival;// define a pointer by writing *p, where p is name being defined
	//using address-of operator(the & op) to get the address
	int *p2 = p;
	cout<< &ival <<endl;
	
	cout<<"p = "<< p<<endl;// p is a pointer hold address of ival
	cout<<"&p = "<< &p <<endl;// address of pointer p
	cout<<"*p = "<< *p <<endl;// get value of address in p
	//& : get addr
	//* : get value in addr

	cout<< p2<<endl;// p2 is a pointer hold addr of ival ( same as p )
	cout<< &p2 <<endl;// get addr of p2
	cout<< *p2 <<endl;//et value of address in p2
	


}