/*
primer p.105 2.5 start
two ways for type aliases

auto tyoe specifier: compiler deduce the type from initializer

*/
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	typedef double wages; // wages functions as double
	typedef wages base, *p;
	using CDB = const double; // CDB functions as const double
	CDB grade = 66.1;
	typedef char* pstring;
	/***********************************************************/
	int a = 5;
	double b = 2;
	auto c = a + b; // auto 
	const auto c_int = 87; // auto ordinarily ignores top-level const
	//but keep low-level const
	cout<<typeid(c).name()<<endl;

	auto d = 100;
	cout<<typeid(d).name()<<endl;
	d += 3.3;
	cout<<typeid(d).name()<<endl;

}