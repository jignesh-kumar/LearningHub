#include <iostream>
using namespace std;
int x;

void myFunction()
{
    // First Local class
    class LocalClass1
    {
    public:
        LocalClass1() { cout << "LocalClass1::LocalClass1()" << endl; }
    };

    // Second Local class
    class LocalClass2
    {
        // Fine: A local class can use other local classes of same function
        LocalClass1 objLC1;

    public:
        LocalClass2() { cout << "LocalClass2::LocalClass2()" << endl; }
        void mLocalClass2Function()
        {
            // Fine: Local class member mLocalClass2Function can access global variables.
            cout << "x = " << x << endl;
        }
    };

    LocalClass2 objLC2;
    objLC2.mLocalClass2Function();
}

int main()
{
    myFunction();
    return 0;
}
