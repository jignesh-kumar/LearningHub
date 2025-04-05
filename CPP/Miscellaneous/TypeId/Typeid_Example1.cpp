#include <iostream>
#include <typeinfo>

using namespace std;

class A {};
class B {};

int main()
{
    A a1, a2;  // Objects of class A
    B b1, b2;  // Objects of class B

    // Checking if objects a1 and b1 belong to the same class
    if (typeid(a1) == typeid(b1)) {
        cout << "a1 and b1 belong to the same class." << endl;
    } else {
        cout << "a1 and b1 belong to different classes." << endl;
    }

    // Checking if objects a1 and a2 belong to the same class
    if (typeid(a1) == typeid(a2)) {
        cout << "a1 and a2 belong to the same class." << endl;
    } else {
        cout << "a1 and a2 belong to different classes." << endl;
    }

    // Comparing memory addresses of a1 and a2
    if (&a1 == &a2) {
        cout << "a1 and a2 are the same object." << endl;
    } else {
        cout << "a1 and a2 are different objects." << endl;
    }

    return 0;
}
