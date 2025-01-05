/*
Initializer List is used in initializing the data members of a class.
The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.
Following is an example that uses the initializer list to initialize x and y of Point class.
*/
#include<iostream>

using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x = 0, int y = 0): x(x), y(y) {}
    /*  The above use of Initializer list is optional as the
        constructor can also be written as:
        Point(int i = 0, int j = 0) {
            x = i;
            y = j;
        }
    */
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    Point pointObj1(10, 20);
    cout << "X:" << pointObj1.getX() << endl;
    cout << "Y:" << pointObj1.getY() << endl;
    return 0;
}

/*
The above code is just an example for syntax of the Initializer list.
In the above code, x and y can also be easily initialed inside the constructor.
But there are situations where initialization of data members inside constructor doesn’t work and Initializer List must be used.
*/