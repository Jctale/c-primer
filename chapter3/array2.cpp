#include <iostream>
/*p.168*/
using namespace std;
int main()
{
	string nums[] = {"one", "two", "three"};
	string *p = &nums[0];// p points to the 1st element in nums
	string *p2 = nums; // equals to p2 = &nums[0]
}