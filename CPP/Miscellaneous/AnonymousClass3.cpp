/*
Restricting the Scope of an Anonymous Class
To restrict the scope of objects for the anonymous class,
the `typedef` keyword can be used. In this example, `typedef` is used to assign a convenient name to the class.
Using this name, multiple objects `obj1` and `obj2` are created for the anonymous class.
This approach helps in controlling the scope of the objects, which are confined to the main function.
*/

// CPP program to illustrate the concept of Anonymous Class by scope restriction

#include<iostream>

using namespace std;

// Anonymous Class : Class is not having any name
typedef class
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
} myClass; // using typedef to give a proper name

// Driver function
int main()
{
    // multiple objects
    myClass obj1, obj2;
    obj1.setData(10);
    obj1.print();

    obj2.setData(20);
    obj2.print();

    return 0;
}
