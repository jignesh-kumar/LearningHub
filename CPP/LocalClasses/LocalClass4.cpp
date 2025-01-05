// PROGRAM 2
#include<iostream>
using namespace std;

void fun()
{
    class LocalClass  // local to fun
    {
    public:
        static void mLocalClassFunction()
        {
            cout << "Local Class mLocalClassFunction() called";
        }
    };

    LocalClass::mLocalClassFunction();
}

int main()
{
    fun();
    return 0;
}
