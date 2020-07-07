#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char a1[] = {'C','+','+'};//no null, dimension = 3
	char a2[] = {'C','+','+','\0'};//explicit null, dimension = 4
	char a3[4] = "C++";// null terminator added automatically
	int *ptrs[10];// ptrs is an array of ten pointers
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	int (*Parray)[10] = &arr;//Parray points to an array of ten ints;
	int (&arrRef)[10] = arr;//arrRef refers to an array of ten ints
	int *(&arry)[10] = ptrs;//arry is a ref to an array of ten pointers
	for(auto i:arr)
		cout<<i<<" ";
	return 0;

}