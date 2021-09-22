#include <iostream>
using namespace std;
int main()
{
    int b = 0b00100011;
    unsigned int c : 3 = b;
    cout << c << endl;
}