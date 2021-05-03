#include<iostream>
#include<cstring>
using namespace std;
void rv(char *a)
{
	for(int i=0;i<strlen(a)/2;i++)
	{
		swap(a[i],a[strlen(a)-1-i]);

	}
}
int main()
{
	char cs[]="string";
	char *p=cs;
	rv(cs);
	while(*p)
	{
		cout<<*p<<endl;
		p++;
	}
}