#include <iostream>

using namespace std;

void myFunction()
{
    cout << "This is myFunction" << endl;
}

void printName(char *data)
{
    cout << "The data is " << data << endl;
}

void func1()
{
    cout << "func1 is called" << endl;
}
void func2(void (*funcptr)())
{
    funcptr();
}

int main()
{
    cout << "********************************** Example 1 ***************************************" << endl;
    {
        cout << "address of function main is       : " << reinterpret_cast<void *>(main) << endl;
        cout << "address of function myFunction is : " << reinterpret_cast<void *>(myFunction) << endl;
    }

    cout << "********************************** Example 2 ***************************************" << endl;
    {
        char myData[20];
        void (*funcPtr)(char *data);
        funcPtr = printName;
        funcPtr("My Name is Jonty");
    }
    cout << "********************************** Example 3 ***************************************" << endl;
    {
        func2(func1);
    }

    cout << "********************************** Example 4 ***************************************" << endl;
    {
        // Assigning a function to a function pointer
        void (*funcPtr)(void) = func1; // funcPtr points to function func1
        funcPtr();

        funcPtr = myFunction; // funcPtr now points to function myFunction
        funcPtr();

        // funcPtr = myFunction();
        /*  This would actually assign the return value from a call to function myFunction() to funcPtr, which isn’t what we want.
            We want funcPtr to be assigned the address of function myFunction, not the return value from function myFunction().
            So no parenthesis are needed.
        */
    }

    cout << "********************************** End *********************************************" << endl;
    return 0;
}