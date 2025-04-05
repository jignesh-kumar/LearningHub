#include <iostream>
using namespace std;

class Base
{
    int x;
public:
    Base() {}
    Base* operator &() = delete;
};

int main()
{
    // Uncommenting the following lines will cause a compilation error
    // because the address operator is deleted in the Base class.
    /*
    Base b;
    Base *bp = &b;
    cout << &b << endl;
    cout << bp << endl;
    */
    return 0;
}
