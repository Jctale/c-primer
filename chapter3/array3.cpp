#include<iostream>

using namespace std;
int main()
{
	int ia[3][2]={0,1,2,3,4,5};

	for(auto &row:ia)
	{
		for(auto col:row)
			cout<<col<<endl;
	}

	int (*p)[2] = ia;
	p = &ia[2];
	for(auto a:*p)cout<<a<<endl;
}