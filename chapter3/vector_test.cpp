#include <iostream>
#include <vector>
#define pb push_back

using namespace std;

using Cost = int;

int main()
{
	vector<int> num;
	vector<vector<int>> _2dmat;
	vector<Cost> pricelist;
	pricelist.pb(2);
	pricelist.pb(12);
	for(auto p:pricelist)
		cout<<p<<endl;

	vector<int> t = {1,2};
	vector<int> t2 = t;
	vector<int> t3(t2);
	vector<int> t4(10);
	vector<string> sv(3,"Null");
	for(auto a:sv)
		cout<<a<<endl;
	return 0;
}