/*
Creating a Single Object of an Anonymous Class
In this example, an anonymous class is created with an object named `obj1`.
The scope of `obj1` extends throughout the program, allowing access within the main function.
In the main function, `obj1` is used to call member functions of the anonymous class.
*/


// CPP program to illustrate the concept of Anonymous Class

#include <iostream>

using namespace std;

// Anonymous Class : Class is not having any name

class
{
    // data member
    int i;
public:
    void setData(int i)
    {
        // this pointer is used to differentiate
        // between data member and formal argument
        this->i = i;
    }
    void print()
    {
        cout << "Value for i : " << this->i << endl;
    }

} obj1; // object for anonymous class

// Driver function
int main()
{
    obj1.setData(10);
    obj1.print();
    return 0;
}
