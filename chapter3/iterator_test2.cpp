#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
int main()
{
	vector<string> vnum(2);
	for(auto it = vnum.begin();it != vnum.end();it++)
		cout<<(*it).empty()<<endl;//equivalent to it->empty()
	//arrow operator combines dereference and member access
	vector<string> vnum2;
	vnum2.pb("first");
	vnum2.pb("second");
	vnum2.pb("third");
	auto it = vnum2.begin();
	auto it2 = vnum2.end();
	cout<<"it2-it = "<<it2-it<<endl;//cal the number between it2 it
	if(it2>it)
		cout<<"it2>it"<<endl;
	it +=2;//move 2 forward
	for(;it != vnum2.end();it++)
		cout<<*it<<endl;

	/* binary search using iterators */
	vector<int> sortednum;
	for(int i=1;i<16;i++)
		sortednum.pb(i);
	auto lhs = sortednum.begin(), rhs = sortednum.end();
	auto mid = sortednum.begin() + (rhs - lhs)/2;
	int goal = 7;
	while(mid != rhs && *mid != goal)
	{
		cout<<" search between "<<*lhs<<" "<<*(rhs-1)<<endl;
		if(goal < *mid)
			rhs = mid;
		else
			lhs = mid + 1;
		mid = lhs + (rhs - lhs)/2;
	}
	return 0;
}