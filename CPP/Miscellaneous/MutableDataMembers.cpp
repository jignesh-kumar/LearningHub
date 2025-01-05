#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    mutable int b;

    Test(int x=0, int y=0)
    {
        a = x;
        b = y;
    }

    void seta(int x=0)
    {
        a = x;
    }

    void setb(int y=0)
    {
        b = y;
    }

    void disp() const
    {
        cout << endl << "a: " << a << " b: " << b << endl;
    }
};

int main()
{
    const Test t(10, 20);

    cout << t.a << " " << t.b << "\n";

    // t.a = 30; // Error: 'a' cannot be changed because the object is constant.

    t.b = 100; // 'b' can still be changed because it is mutable.

    cout << t.a << " " << t.b << "\n";

    return 0;
}
