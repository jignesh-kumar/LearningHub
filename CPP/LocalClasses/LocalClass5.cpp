// PROGRAM 1
#include <iostream>
using namespace std;

void myFunction()
{
    static int x;
    enum
    {
        i = 1,
        j = 2
    };

    // Local class
    class LocalClass
    {
    public:
        void mLocalClassFunction()
        {
            cout << "x = " << x << endl; // fine as x is static
            cout << "i = " << i << endl; // fine as i is enum
        }
    };

    LocalClass obj;
    obj.mLocalClassFunction();
}

int main()
{
    myFunction();
    return 0;
}
