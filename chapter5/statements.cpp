#include <iostream>
#include <vector>
/*p.233~p.258*/
using namespace std;

int main()
{
	int i;
	int ans = 87;
	while (cin >> i && i != ans)
		; // null statement, read until hit EOF or find the ans
	vector<int> v = {0, 1, 2, 3, 4};
	for (auto &r : v)
		r *= 2;
}