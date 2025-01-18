/*
Example: constexpr with Arrays
Here's another example that demonstrates the use of constexpr with arrays and compile-time constants:
*/
/***********************************************************************************************************************************/
#include <iostream>

// constexpr function to create an array of squares
constexpr int square(int x)
{
    return x * x;
}

int main()
{
    // Create an array of squares using constexpr
    constexpr int squares[] = {square(0), square(1), square(2), square(3), square(4), square(5)};

    // Print the array
    for (int i = 0; i < 6; ++i) {
        std::cout << "Square of " << i << " is " << squares[i] << std::endl;
    }

    return 0;
}

/***********************************************************************************************************************************/
/*
[Conclusion]
constexpr enables you to evaluate expressions at compile-time, resulting in more efficient code.
Whether you're calculating factorials, initializing arrays, or performing other computations, constexpr
helps you optimize performance by moving work from runtime to compile-time.
*/
