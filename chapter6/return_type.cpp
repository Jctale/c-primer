#include <iostream>
/*p.296~*/
using namespace std;

const string &manip()
{
    string ret;
    if (!ret.empty())
        return ret;
    // WRONG: returning a ref. to a local obj!
    return "Empty";
    // WRONG: string literal "Empty" is converted to a local temporary string
}
int main()
{
    cout << manip() << endl;
}
