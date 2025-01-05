// PROGRAM 1
#include <iostream>

void myFunction()
{
    class LocalClass // local to myFunction
    {
    public:
        // Fine as the mLocalClassFunction is defined inside the local class
        void mLocalClassFunction()
        {
            std::cout << "Local Class mLocalClassFunction() called" << std::endl;
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