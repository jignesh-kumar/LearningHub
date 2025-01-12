/*emplace_back is a method in C++ used with containers such as std::vector, std::deque, and std::list,
which are part of the Standard Template Library (STL).
It allows you to add elements to the container in place.
This is often more efficient than the traditional push_back method because
it constructs the element directly in the container, avoiding a temporary object creation.
Here's a simple example using std::vector:
*/

#include <iostream>
#include <vector>

class MyClass
{
public:
    MyClass(int x) : x(x)
    {
        std::cout << "MyClass constructed with " << x << std::endl;
    }

private:
    int x;
};

int main()
{
    std::vector<MyClass> vec;

    // Using emplace_back
    vec.emplace_back(10); // Constructs MyClass(10) directly in the vector

    return 0;
}

/*
In this example, vec.emplace_back(10) constructs an object of MyClass with the value 10 directly in the vector.
This can be more efficient than using vec.push_back(MyClass(10));,
which would first create a temporary MyClass object and then move or copy it into the vector.
*/
