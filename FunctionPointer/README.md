Function Pointer

You know that a pointer is a variable that holds the address of another variable. Function pointers are similar, except that instead of pointing to variables, they point to functions!

Just like it is possible to declare a non-constant pointer to a normal variable, it’s also possible to declare a non-constant pointer to a function. In the rest of this lesson, we’ll examine these function pointers and their uses. Function pointers are a fairly advanced topic, and the rest of this lesson can be safely skipped or skimmed by those only looking for C++ basics.

Note that the type (parameters and return type) of the function pointer must match the type of the function. Here are some examples of this:
```sh
// function prototypes
int foo();
double goo();
int hoo(int x);
 
// function pointer assignments
int (*fcnPtr1)() = foo; // okay
int (*fcnPtr2)() = goo; // wrong -- return types don't match!
double (*fcnPtr4)() = goo; // okay
fcnPtr1 = hoo; // wrong -- fcnPtr1 has no parameters, but hoo() does
int (*fcnPtr3)(int) = hoo; // okay
```

Unlike fundamental types, C++ will implicitly convert a function into a function pointer if needed (so you don’t need to use the address-of operator (&) to get the function’s address). However, it will not implicitly convert function pointers to void pointers, or vice-versa.

Default parameters won’t work for functions called through function pointers. Default parameters are resolved at compile-time (that is, if you don’t supply an argument for a defaulted parameter, the compiler substitutes one in for you when the code is compiled). However, function pointers are resolved at run-time. Consequently, default parameters can not be resolved when making a function call with a function pointer. You’ll explicitly have to pass in values for any defaulted parameters in this case.

Passing functions as arguments to other functions:
One of the most useful things to do with function pointers is pass a function as an argument to another function. Functions used as arguments to another function are sometimes called callback functions.

You can even set one of these as a default parameter:
```sh
// Default the sort to ascending sort
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int) = ascending);
```

In this case, as long as the user calls selectionSort normally (not through a function pointer), the comparisonFcn parameter will default to ascending.

Making function pointers prettier with typedef or type aliases:
Let’s face it -- the syntax for pointers to functions is ugly. However, typedefs can be used to make pointers to functions look more like regular variables:
```shtypedef bool (*validateFcn)(int, int);```

This defines a typedef called “validateFcn” that is a pointer to a function that takes two ints and returns a bool.
Now instead of doing this:
```shbool validate(int x, int y, bool (*fcnPtr)(int, int)); // ugly```

You can do this:
```shbool validate(int x, int y, validateFcn pfcn) // clean```

Which reads a lot nicer! However, the syntax to define the typedef itself can be difficult to remember.
In C++11, you can instead use type aliases to create aliases for function pointers types:
```shusing validateFcn = bool(*)(int, int); // type alias```

This reads more naturally than the equivalent typedef, since the name of the alias and the alias definition are placed on opposite sides of the equals sign.
Using a type alias is identical to using a typedef:
```shbool validate(int x, int y, validateFcn pfcn) // clean```
