
#include <iostream>

void myFunction()
{
    class LocalClass    // This is Local class to myFunctoin
    {
        public:
            std::string name = "This is Local Class";
    };
    LocalClass obj;
    LocalClass *ptr;
    std::cout << obj.name << std::endl;
}

int main()
{
    myFunction();
}


