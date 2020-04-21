#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char a1[] = {'C','+','+'};//no null, dimension = 3
	char a2[] = {'C','+','+','\0'};//explicit null, dimension = 4
	char a3[4] = "C++";// null terminator added automatically
	return 0;

}