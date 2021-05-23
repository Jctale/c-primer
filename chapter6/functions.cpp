#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    double num;
    while (cin >> num)
        cout << abs(num) << endl;
}
double abs(double val)
{
    if (val > 0)
        return val;
    return -val;
}