#include <iostream>
#include <iterator>
/*~p.174*/
using namespace std;
int main()
{
	string nums[] = {"one", "two", "three"};
	string *p = &nums[0];// p points to the 1st element in nums
	string *p2 = nums; // equals to p2 = &nums[0]

	int num[]={0,1,2};
	int *e=&num[3];//pointer just past the last element in num
	/*
	We can take the address of the nonexistent element one past
	the last element of an array.
	An off-the-end pointer does not point to an element.As a result,
	we may not dereference or increment an off-the-end pointer.
	*/
	for(int *b = num; b != e; ++b)
		cout<<*b<<endl;
	//error-prone
	//using begin and end function 
	int ia[]={0,1,2};
	int *beg = begin(ia);
	int *last = end(ia);
	for(;beg!=last;++beg)
		cout<<*beg<<endl;
	
	int *p3 = &ia[2];
	int k = p3[-2];// same as ia[0]
	//We can use the subscript operator on any pointer,
	//as long as that pointer points to an element 
	//(or one past the last element) in an array:
	cout<<k<<endl;


	return 0;
}	