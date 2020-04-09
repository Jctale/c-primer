#include <iostream>
#include <vector>
#define pb push_back

using namespace std;

int main()
{
	vector<int> vec_num;
	vector<int> vec_num2;
	// it's often unnecessary to def vec of a specific size
	//vectors grow efficiently
	for(int i=3;i<10;i++)
		vec_num.pb(i);
	for(int i=3;i<11;i++)
		vec_num2.pb(i);
	cout<<(vec_num2>vec_num?"true":"false")<<endl;//dictionary order stop at the first > or <

	for(auto &num:vec_num2)
		num *= num;
	for(auto num:vec_num2)
		cout<<num<<endl;

	vector<int> scores(11,0);
	int grade;
	while(cin>>grade)
		++scores[grade/10];

	/*
	vector<int> ivec;
	for(int ix = 0; ix < 3; ix++)
		ivec[ix] = ix;// disaster: no elements to subscript!
	*/
	return 0;
}