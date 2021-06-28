#include <iostream>
#include "functions.h"
/*p.268~p.294*/
using namespace std;

int main()
{
    double num;
    //while (cin >> num)
    //    cout << abs(num) << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    fun(arr);
}
double abs(double val)
{
    if (val > 0)
        return val;
    return -val;
}
int fun(int (&arr)[5])
{
    for (auto e : arr)
        cout << e << endl;
}