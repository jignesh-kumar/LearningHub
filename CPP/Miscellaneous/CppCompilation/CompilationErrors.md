
# Compilation Errors
---
Here’s how issues can arise at different stages:
- **Preprocessing Errors:** Missing header files (e.g., `#include <unknown>`).
- **Compilation Errors:** Syntax issues like mismatched parentheses or undefined variables.
- **Linker Errors:** Unresolved references to external functions, like `undefined reference to 'displayArea'`.
- **Runtime Errors:** Logical errors like dividing by zero or accessing invalid memory.

---
C++ compilation errors are often a result of syntax or semantic issues in the code. Here are some of the most common ones developers encounter:

---

### **1. Syntax Errors**
These occur when the code violates C++ grammar rules. Examples:
- **Missing semicolon (`;`):**
  ```cpp
  int x = 5  // Error: Missing semicolon.
  ```
- **Mismatched parentheses or braces:**
  ```cpp
  if (x > 5 {
      std::cout << "Hello";
  } // Error: Missing closing parenthesis in `if`.
  ```

---

### **2. Undefined Variables**
Using a variable that hasn’t been declared or initialized causes an error.
```cpp
std::cout << y; // Error: `y` is not declared.
```

---

### **3. Type Mismatch**
This occurs when the assigned value doesn’t match the variable's type or incompatible types are used in operations.
```cpp
int x = "Hello"; // Error: Cannot assign a string to an integer variable.
```

---

### **4. Function Declaration Errors**
Calling a function that isn’t declared or defined properly:
```cpp
void myFunction(); // Declared but not defined.
myFunction();      // Error during compilation due to missing definition.
```

---

### **5. Unresolved References**
Occurs during linking, when the compiler cannot find the implementation of functions or variables:
```cpp
extern int someVariable;
std::cout << someVariable; // Error: `someVariable` not defined anywhere.
```

---

### **6. Missing Header Files**
Failing to include necessary headers results in errors.
```cpp
std::cout << "Hello"; // Error: No `#include <iostream>` for `std::cout`.
```

---

### **7. Implicit Type Conversion Issues**
Sometimes, implicit conversions between types can cause unexpected behavior:
```cpp
int x = 5.7; // Error: Implicit conversion from `double` to `int`.
```

---

### **8. Namespace Errors**
If you forget to use the correct namespace or include `std::` explicitly:
```cpp
cout << "Hello"; // Error: `cout` is not in the global namespace. Use `std::cout`.
```

---

### **9. Incompatible Templates**
Errors in template declarations or usage can arise:
```cpp
template <typename T>
void add(T a, T b) {
    return a + b; // Error if `T` is non-additive (e.g., a struct).
}
```

---

### **10. Const and Mutable Violations**
Attempting to modify a constant variable triggers errors:
```cpp
const int x = 5;
x = 10; // Error: Cannot modify a constant variable.
```

---

### **11. Invalid Array Index**
Using a variable or value that isn’t allowed as an array index:
```cpp
int arr[5];
std::cout << arr[-1]; // Error: Array index out of bounds.
```

---

### **12. Incorrect Use of Pointers**
Errors with memory allocation or null pointers are common:
```cpp
int* ptr;
std::cout << *ptr; // Error: Dereferencing a null pointer.
```

---

### **Tips for Debugging Compilation Errors**
- **Read the error message carefully:** It often points to the problematic line and hints at the issue.
- **Check header files and namespaces:** Ensure that all necessary headers are included.
- **Compile incrementally:** Focus on smaller sections of code to isolate issues.
- **Use a linter or IDE:** Modern tools can identify potential errors before compilation.

---