#include <iostream>
#include <cstdlib>
#include <typeinfo>

using namespace std;
int main()
{
	int *p1 = nullptr; // in c++11
	int *p2 = 0;
	int *p3 = NULL;
	int num = 5;
	int num2 = 5;
	int *p4 = &num;
	int *p5 = &num;
	int *p6 = &num2;
	// pointer equality (==) compares if they hold the same address
	if(p4 == p5)
		cout<<"same obj"<<endl;
	if(p4 != p6)
		cout<<"diff obj"<<endl;
	if(p1 == p2)
		cout<<"eq"<<endl;

	int i = 42;
	int *p;
	int *&r = p;// r is a ref to pointer p 
	
	//cout<<typeid(r).name()<<endl;


}