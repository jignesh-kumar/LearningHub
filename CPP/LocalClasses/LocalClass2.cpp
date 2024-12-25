// PROGRAM 2
#include <iostream>

void myFunction()
{
    class LocalClass // local to myFunction
    {
    public:
        void mLocalClassFunction();
    };

    void LocalClass::mLocalClassFunction() // Error as the mLocalClassFunction is defined outside the local class
    {
        std::cout << "Local Class mLocalClassFunction() called" << std::endl;
    }

    LocalClass obj;
    obj.mLocalClassFunction();
}

int main()
{
    myFunction();
    return 0;
}