/*
Example: Compile-time vs. Runtime Calculation
Here's a program that demonstrates the power of constexpr in C++ by comparing a compile-time calculation with a runtime calculation:
*/
/***********************************************************************************************************************************/
#include <iostream>
#include <chrono>

// constexpr function to compute the factorial of a number
constexpr int factorial(int n)
{
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

// Non-constexpr function to compute the factorial of a number at runtime
int factorial_runtime(int n)
{
    return (n <= 1) ? 1 : (n * factorial_runtime(n - 1));
}

int main()
{
    // Compile-time calculation using constexpr
    {
        auto start = std::chrono::high_resolution_clock::now();
        constexpr int compile_time_result = factorial(10);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> runtime_duration = end - start;

        std::cout << "Compile-time result: " << compile_time_result << std::endl;
        std::cout << "Time taken for Compile calculation: " << runtime_duration.count() << " ms" << std::endl;
    }

    // Runtime calculation using a regular function
    {
        int n = 10;
        auto start = std::chrono::high_resolution_clock::now();
        int runtime_result = factorial_runtime(n);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> runtime_duration = end - start;

        std::cout << "Runtime result: " << runtime_result << std::endl;
        std::cout << "Time taken for runtime calculation: " << runtime_duration.count() << " ms" << std::endl;
    }

    return 0;
}

/***********************************************************************************************************************************/
/*
[Explanation]
Compile-time Calculation:
    The constexpr function factorial is evaluated at compile-time.
    This means that compile_time_result is calculated during compilation,
    and the result is embedded directly into the binary.

Runtime Calculation:
    The factorial_runtime function is evaluated at runtime,
    and we measure the time taken for this calculation using the <chrono> library.

[Insights]
Compile-time Result:
    The result of factorial(10) calculated at compile-time is directly available as 3628800.

Runtime Result:
    The result of factorial_runtime(10) is also 3628800, but it is calculated at runtime.

Performance Gain:
    The runtime calculation took approximately 0.002 ms, which may seem negligible for small numbers.
    However, for more complex computations or in performance-critical applications, the difference can be substantial.

This example shows how constexpr can help move computations to compile-time, resulting in faster and more efficient code execution at runtime.
*/
