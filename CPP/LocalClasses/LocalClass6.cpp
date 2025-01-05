// PROGRAM 2
#include <iostream>
using namespace std;

void myFunction()
{
    int x = 42; // Initialize the variable

    // Local class
    class LocalClass
    {
    public:
        LocalClass(int value) : x(value) {}

        void mLocalClassFunction()
        {
            cout << "x = " << x << endl;
        }

    private:
        int x; // Local copy of the variable
    };

    LocalClass obj(x); // Pass the variable to the constructor
    obj.mLocalClassFunction();
}

int main()
{
    myFunction();
    return 0;
}
