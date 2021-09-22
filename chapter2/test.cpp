#include <iostream>
using namespace std;

void myprint(char *p)
{
    std::cout << "pointer\n";
}

void myprint(int n)
{
    std::cout << "integer\n";
}

int main()
{
    //myprint(0);
    myprint(NULL);
    return 0;
}