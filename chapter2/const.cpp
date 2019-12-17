/*
We use the term top-level const to indicate that the pointer itself is a const.
When a pointer can point to a const object, 
we refer to that const as a low-level const.
*/
// primer p.102 2.4.3 fin
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int *const p1 = &i; // can't change val of p1 const is top-level
	const int ci = 42;// const is top-level
	const int *p2 = &ci;//const is low-level
	const int *const p3 = p2;// left low right top
	const int &r = ci;// const in ref types is always low-level

	i = ci;// ok copying from ci, top-level const is ignored
	p2 = p3;// ok top-level const is ignored

	//int *p = p3;// error p3 has a low level const but p doesn't
	p2 = &i;// ok: p2 can point to either const or non-const obj 
	// (i can't be modify by *p2)
	

}