// PROGRAM 2
#include <iostream>
using namespace std;

void myFunction()
{
    int x;

    // Local class
    class LocalClass
    {
    public:
        void mLocalClassFunction()
        {
            cout << "x = " << x << endl;
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
