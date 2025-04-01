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
#ifdef _MSC_VER  // Microsoft Visual Studio Compiler
// In MSVC, anonymous classes are not supported
// So, we need to use a named class
// to create an object of the class
// The class name is not required to be used
// in the program, but it is required to create an object
// So, we can use typedef to give a name to the class
// and use it to create an object
class myClass
#else
typedef class
#endif
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
#ifdef _MSC_VER
};
#else
} myClass; // using typedef to give a proper name
#endif

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
