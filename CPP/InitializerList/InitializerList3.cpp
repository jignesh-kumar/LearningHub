// For initialization of member objects which do not have default constructor:
// In the following example, an object “a” of class “A” is data member of class “B”, and “A” doesn’t have default constructor. 
// Initializer List must be used to initialize “a”.

#include <iostream> 
using namespace std; 
  
class A { 
    int i; 
public: 
    A(int ); 
}; 
  
A::A(int arg) { 
    i = arg; 
    cout << "A's Constructor called: Value of i: " << i << endl; 
} 
  
// Class B contains object of A 
class B { 
    A a; 
public: 
    B(int ); 
}; 
  
B::B(int x):a(x) {  //Initializer list must be used 
    cout << "B's Constructor called" << endl; 
} 
  
int main() { 
    B obj(10); 
    return 0; 
}

//If class A had both default and parameterized constructors, then Initializer List is not must if we want to initialize “a” 
//using default constructor, but it is must to initialize “a” using parameterized constructor.
