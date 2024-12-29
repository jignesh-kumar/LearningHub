/*
1) For initialization of non-static const data members:
const data members must be initialized using Initializer List. 
In the following example, “t” is a const data member of Test class and is initialized using Initializer List. 
Reason for initializing the const data member in initializer list is because no memory is allocated separately for const data member, 
it is folded in the symbol table due to which we need to initialize it in the initializer list.
Also, it is a copy constructor and we don’t need to call the assignment operator which means we are avoiding one extra operation.
*/

#include<iostream>

using namespace std;

class Test
{
private:
    const int t;
public:
    Test(int t):t(t) {} //Initializer must use here for the t.
    int getT() { return t; }
};

int main()
{
    Test objTest(30);
    cout << "T:" << objTest.getT() << endl;
    return 0;
}

