/*
How to overload pre-increment operator by using the concept of nameless temporary objects in C++?
Sometimes to reduce the code size, we create nameless temporary object of class.
When we want to return an object from member function of class without creating an object, for this: we just call the constructor of class and return it to calling function and there is an object to hold the reference returned by constructor.
This concept is known as nameless temporary objects, using this we are going to implement a C++ program for pre-increment operator overloading.
*/

#include <iostream>

using namespace std;

class Sample
{
private:
    int count;

public:
    // Default Constructor
    Sample()
    {
        count = 0;
    }
    // Parameterized Constructor
    Sample(int i) : count (i){ };

    // Operator Overloading function defination
    Sample operator++()
    {
        ++count;
        // returning count of Sample
        // There is no new object here,
        // Sample(count): is a constructor by passing value of count
        // and returning the value (incremented value)
        return Sample(count);
    }

    // Printing Value
    void PrintSampleValue()
    {
        cout << "Count Value is :" << count << endl;
    }
};

int main()
{
    int i = 0;
    Sample S1(100), S2;

    for (i = 0; i < 5; i++)
    {
        S2 = ++S1;

        cout << "S1 :" << endl;
        S1.PrintSampleValue();

        cout << "S2 :" << endl;
        S2.PrintSampleValue();
    }
    return 0;
}

/*
In this program, we used nameless temporary object in overloaded member function.
Here, we did not create any object inside the member function. 
We are just calling the constructor and returning incremented value to calling function.
*/