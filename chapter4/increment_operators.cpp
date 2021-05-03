#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v{0,1,2,3};
	auto pbeg = v.begin();
	while(pbeg != v.end() && *pbeg>=0)
		cout<<*pbeg++<<endl;  //++ precedence > deref prec => equals to *(pbeg++)
	// pbeg++ increments pbeg and yields a copy of the prev value of pbeg as its result
}