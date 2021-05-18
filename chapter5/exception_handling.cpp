#include <iostream>
/*p.259~p.261*/
using namespace std;

int main()
{
    int t1, t2;
    cin >> t1 >> t2;
    // a throw exception
    if (t1 != t2)
        throw runtime_error("Mismatched"); //throwing an exception terminates the current function and transfers
    //control to a handler that will know how to handle this error.
    //if we're still here, the values are the same
    cout << t1 + t2 << endl;

    // the try block
    while (cin >> t1 >> t2)
    {
        try
        {
            if (t1 != t2)
                throw runtime_error("Mismatched");
            cout << "Sum=" << t1 + t2 << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what()
                 << "\nTry again? y/n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
    return 0;
}