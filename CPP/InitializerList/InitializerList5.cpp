//When constructor’s parameter name is same as data member
//If constructor’s parameter name is same as data member name then the data member must be initialized either using this pointer or Initializer List. 
//In the following example, both member name and parameter name for A() is “i”.
#include <iostream> 
using namespace std; 
  
class A { 
    int i; 
public: 
    A(int ); 
    int getI() const { return i; } 
}; 
  
A::A(int i):i(i) { }  // Either Initializer list or this pointer must be used 
/* The above constructor can also be written as  
A::A(int i) {  
    this->i = i; 
} 
*/
  
int main() { 
    A a(10); 
    cout<<a.getI() << endl; 
    return 0; 
} 