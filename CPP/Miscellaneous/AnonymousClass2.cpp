/*
Creating Two Objects of an Anonymous Class
In this example, two objects `obj1` and `obj2` are created for an anonymous class, and the member functions of the class are called.
The scope of `obj1` and `obj2` extends throughout the program, allowing multiple objects to be created for the anonymous class.
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

} obj1, obj2; // multiple objects for anonymous class

// Driver function
int main()
{
    obj1.setData(10);
    obj1.print();

    obj2.setData(20);
    obj2.print();

    return 0;
}
