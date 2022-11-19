#include <iostream>
#include<stdio.h>

using namespace std;


void myFunction()
{
    cout << "This is myFunction" << endl;
}

void printName(char *data)
{
    cout << "The data is " << data << endl;
}

void func1()  
{  
    cout << "func1 is called" << endl;  
}  
void func2(void (*funcptr)())  
{  
    funcptr();  
}  

int main()
{
    cout << "********************************** Example 3 ***************************************" << endl;

    printf("address of function main() is :%p\n", main);
    printf("address of function myFunction() is : %p\n", myFunction);

    cout << "********************************** Example 2 ***************************************" << endl;

    char myData[20];
    void(*funcPtr)(char *data);
    funcPtr = printName;
    funcPtr("My Name is Jonty");

    cout << "********************************** Example 3 ***************************************" << endl;

    func2(func1);

    cout << "********************************** End *********************************************" << endl;
    return 0;
}