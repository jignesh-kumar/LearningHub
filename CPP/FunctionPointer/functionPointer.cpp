#include <iostream>
#include <algorithm>

using namespace std;

void myFunction()
{
    cout << "This is myFunction" << endl;
}

void printName(const char *data)
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

// Here is a comparison function that sorts in ascending order
bool ascending(int x, int y)
{
    return x > y; // swap if the first element is greater than the second
}

// Here is a comparison function that sorts in descending order
bool descending(int x, int y)
{
    return x < y; // swap if the second element is greater than the first
}

// This function prints out the values in the array
void printArray(int *array, int size)
{
    for (int index = 0; index < size; ++index)
    {
        cout << array[index] << " " ;
    }

    cout << endl;
}

// Note our user-defined comparison is the third parameter
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int))
{
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        // bestIndex is the index of the smallest/largest element we've encountered so far.
        int bestIndex = startIndex;
        // Look for smallest/largest element remaining in the array (starting at startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            // If the current element is smaller/larger than our previously found smallest
            if (comparisonFcn(array[bestIndex], array[currentIndex])) // COMPARISON DONE HERE
                // This is the new smallest/largest number for this iteration
                bestIndex = currentIndex;
        }
        // Swap our start element with our smallest/largest element
        swap(array[startIndex], array[bestIndex]);
    }
}

int main()
{
    cout << "********************************** Example 1 ***************************************" << endl;
    {
        cout << "address of function main is       : " << reinterpret_cast<void *>(main) << endl;
        cout << "address of function myFunction is : " << reinterpret_cast<void *>(myFunction) << endl;
    }

    cout << "********************************** Example 2 ***************************************" << endl;
    {
        char myData[20];
        void (*funcPtr)(const char *data);
        funcPtr = printName;

        // Calling a function using a function pointer via implicit dereference
        funcPtr("My Name is Jonty");

        // Calling a function using a function pointer via explicit dereference
        (*funcPtr)("This is the world!");
    }
    cout << "********************************** Example 3 ***************************************" << endl;
    {
        func2(func1);
    }

    cout << "********************************** Example 4 ***************************************" << endl;
    {
        // Assigning a function to a function pointer
        void (*funcPtr)(void) = func1; // funcPtr points to function func1
        funcPtr();

        funcPtr = myFunction; // funcPtr now points to function myFunction
        funcPtr();

        // funcPtr = myFunction();
        /*  This would actually assign the return value from a call to function myFunction() to funcPtr, which isn’t what we want.
            We want funcPtr to be assigned the address of function myFunction, not the return value from function myFunction().
            So no parenthesis are needed.
        */
    }

    cout << "********************************** Example 5 ***************************************" << endl;
    {
        // Passing functions as arguments to other functions
        int array[9] = {3, 7, 9, 5, 6, 1, 8, 2, 4};

        cout << "Array Value is : ";
        printArray(array, 9);
        
        // Sort the array in descending order using the descending() function
        selectionSort(array, 9, descending);
        cout << "Array Value after sort in descending : ";
        printArray(array, 9);

        // Sort the array in ascending order using the ascending() function
        selectionSort(array, 9, ascending);
        cout << "Array Value after sort in ascending  : ";
        printArray(array, 9);
    }

    cout << "********************************** End *********************************************" << endl;
    return 0;
}