#include<iostream>
#include<cstring>
/*p.175~*/
using namespace std;

int main()
{
	string s1 = "A string";
	string s2 = "A diff";
	if(s1>s2) cout<<"s1>s2"<<endl;//true

	const char ca1[] = "A string";
	const char ca2[] = "A diff";
	//if(s1>s2) //undefined
	if(strcmp(ca1,ca2)>0) cout<<"ca1>ca2"<<endl;

	const char ca[]={'a','b'};
	const char *cp=ca;



}