#include <iostream>
#include <string>
#include <vector>
// primer p.158 //p.109
using namespace std;
int main()
{
	string s("some string");
	if(s.begin() != s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);// get the ref. to the element denoted by it
	}
	cout<<s<<endl;

	for(auto it = s.begin(); it != s.end() && !isspace(*it); it++)
		*it = toupper(*it);
	// using != instead of < since not all iters have the < operator
	cout<<s<<endl;
	// string::iterator it2 can r/w a string
	vector<int>::iterator it;// it can r/w vector<int> elements
	vector<int> num(5,2);
	for(it = num.begin(); it !=num.end();it++)
		(*it)++;
	for(auto i:num)
		cout<<i<<" ";

	//vector<int>::const_iterator it3; // it3 can r but not w elements
	//we may use only const_iterator for a const vector/string
	//with a nonconst vec/string, either iterator or const_iterator is fine

	vector<int> v;
	const vector<int> cv;
	auto it1 = v.begin(); // it1 has type nonconst iterator
	auto it2 = cv.begin();// it2 has type const_iterator

	auto it3 = v.cbegin();// it3 has type const_iterator  //cbegin cend
	//best to use const_it for read only purpose
}