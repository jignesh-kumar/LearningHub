#include <iostream>

class Base
{
public:
    virtual void func1()
    {
        std::cout << "Base func1\n";
    }
    virtual void func2()
    {
        std::cout << "Base func2\n";
    }
};

int main()
{
    Base b;
    void** vptr = *(void***)&b; // Get the vtable pointer

    std::cout << "VTable Address: " << vptr << std::endl;
    std::cout << "First Virtual Function Address: " << vptr[0] << std::endl;
    std::cout << "Second Virtual Function Address: " << vptr[1] << std::endl;

    return 0;
}
