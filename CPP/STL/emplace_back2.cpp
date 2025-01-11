/*
Let's dive into an example to illustrate the difference between push_back and emplace_back in C++.

### push_back
When you use push_back, you are adding an element to the container by copying or moving an existing element into it.
This often involves creating a temporary object. Here's an example using std::vector:

### emplace_back
When you use emplace_back, you are constructing the new element directly in the container,
which can be more efficient since it avoids creating temporary objects. Here's an example using std::vector:

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

    MyClass(const MyClass& other) : x(other.x)
    {
        std::cout << "MyClass copy-constructed with " << x << std::endl;
    }

private:
    int x;
};

int main()
{
    std::cout << "Using push_back" << std::endl;
    std::vector<MyClass> vec1;

    MyClass obj(10);              // Constructs MyClass(10)
    vec1.push_back(obj);           // Copies obj into the vector


    std::cout << "Using emplace_back " << std::endl;
    std::vector<MyClass> vec2;

    vec2.emplace_back(20); // Constructs MyClass(10) directly in the vector

    return 0;
}

/*
### Summary

- **push_back**: Adds a copy or moved element to the container, potentially creating temporary objects.
- **emplace_back**: Constructs the element in place within the container, avoiding temporary objects and potentially improving performance.

In essence, emplace_back can be more efficient, especially for classes where constructing directly in place saves resources.
If you have more complex situations or performance concerns, emplace_back might be the better choice.

Would you like to see these concepts applied to different container types or with more complex objects?
*/
