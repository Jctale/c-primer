#include <iostream>
#include <string>
// primer p.134 //p.90
using namespace std;
int main()
{

	string tmp = "Hello world!!";
	auto len = tmp.size();//return type is an unsigned whatever
	cout<<len<<endl;

	string s1 = "hello", s2 = "world";
	cout<<"xx" + s1 + "yy"<<endl;
	//getline(cin,tmp);//read to the first newline and stores without it
	decltype(tmp.size()) punct_cnt = 0;// using the return type of tmp.size() to dec
	for (auto c : tmp)
		if(ispunct(c))
			++punct_cnt;
	cout<<punct_cnt<<endl;

	for (auto &c : tmp)// using ref type, so we can change the value 
		c = toupper(c);
	cout<<tmp<<endl;


	//cout<<"xx" + "yy" + s1<<endl;
	//error: at least one operand to each + must be of string type
	return 0;
}
