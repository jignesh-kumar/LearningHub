#include <iostream>
#include <vector>
#include <chrono>

class MyClass
{
public:
    MyClass(int x) : x(x)
    {
        std::cout << "Constructing MyClass with " << x << std::endl;
    }
    MyClass(const MyClass& other) : x(other.x)
    {
        std::cout << "Copying MyClass with " << x << std::endl;
    }

private:
    int x;
};

int main()
{
    const int num_elements = 1'000'000;

    // Measure push_back performance
    auto start_push = std::chrono::high_resolution_clock::now();
    std::vector<MyClass> vec_push;
    for (int i = 0; i < num_elements; ++i) {
        MyClass obj(i);
        vec_push.push_back(obj); // Creates and copies
    }
    auto end_push = std::chrono::high_resolution_clock::now();
    auto duration_push = std::chrono::duration_cast<std::chrono::milliseconds>(end_push - start_push).count();
    std::cout << "push_back time: " << duration_push << " ms\n";

    // Measure emplace_back performance
    auto start_emplace = std::chrono::high_resolution_clock::now();
    std::vector<MyClass> vec_emplace;
    for (int i = 0; i < num_elements; ++i) {
        vec_emplace.emplace_back(i); // Constructs in place
    }
    auto end_emplace = std::chrono::high_resolution_clock::now();
    auto duration_emplace = std::chrono::duration_cast<std::chrono::milliseconds>(end_emplace - start_emplace).count();
    std::cout << "emplace_back time: " << duration_emplace << " ms\n";

    return 0;
}