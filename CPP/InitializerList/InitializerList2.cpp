// For initialization of reference members:
// Reference members must be initialized using Initializer List. 
// In the following example, “t” is a reference member of Test class and is initialized using Initializer List.

#include<iostream> 
using namespace std; 
  
class Test { 
    int &t; 
public: 
    Test(int &t):t(t) {}  //Initializer list must be used 
    int getT() { return t; } 
}; 
  
int main() { 
    int x = 20; 
    Test t1(x); 
    cout<<t1.getT()<<endl; 
    x = 30; 
    cout<<t1.getT()<<endl; 
    return 0; 
}
