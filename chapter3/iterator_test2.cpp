#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<string> vnum(2);
	for(auto it = vnum.begin();it != vnum.end();it++)
		cout<<(*it).empty()<<endl;//equivalent to it->empty()
	//arrow operator combines dereference and member access
	return 0;
}