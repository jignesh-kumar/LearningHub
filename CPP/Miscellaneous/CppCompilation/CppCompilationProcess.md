# C++ Compilation Process
---
Let’s dissect each stage of the compilation process with a hands-on C++ example and in-depth explanations:

---

### **Example Code: Source File (`main.cpp`)**
```cpp
#include <iostream> // Step 1: Preprocessor directive for input-output operations

#define PI 3.14159 // Step 2: Macro definition

void displayArea(double radius) {
    double area = PI * radius * radius; // Step 3: Macro expansion
    std::cout << "Area of circle: " << area << std::endl;
}

int main() {
    double radius = 5.0;
    displayArea(radius); // Step 4: Function call
    return 0;
}
```

---

### **Step-by-Step Breakdown**

#### **1. Preprocessing**
The preprocessor handles directives (`#include`, `#define`) and performs macro expansion. Here's the transformed code after preprocessing:

```cpp
#include <iostream> 

void displayArea(double radius) {
    double area = 3.14159 * radius * radius; // Macro replaced with its value
    std::cout << "Area of circle: " << area << std::endl;
}

int main() {
    double radius = 5.0;
    displayArea(radius); 
    return 0;
}
```

**Tasks:**
- `#include <iostream>` is replaced by the actual header file content, enabling input-output functionality.
- `#define PI 3.14159` is replaced by the value `3.14159`.

**Output:** Pure C++ code, ready for compilation.

---

#### **2. Compilation**
Now, the compiler checks syntax and converts preprocessed code into **assembly language**. Assembly language is low-level code but still readable by humans. Here's an example snippet:

```asm
.globl main
main:
    push rbp
    mov rbp, rsp
    sub rsp, 16
    mov qword ptr [rbp-8], 5.0
    mov xmm0, qword ptr [rbp-8]
    call displayArea
    xor eax, eax
    leave
    ret
```

**Tasks:**
- Errors like undeclared variables or type mismatches are reported here.
- Optimization techniques (e.g., inline function calls) might be applied.

**Output:** Assembly code (`main.s`).

---

#### **3. Assembly**
The assembler converts the assembly code into machine-level instructions (binary). This results in an **object file** (`main.o`), containing:
- Machine code for the functions.
- Symbols for external references, like `std::cout` (part of the C++ Standard Library).

Binary Example (simplified representation):
```
01001011011001010101010110100010101010...
```

---

#### **4. Linking**
The **linker** combines the object file (`main.o`) with system libraries (e.g., `libstdc++.so`) to create a fully functional executable (`main.exe` or `a.out`).

**Tasks:**
- Resolves references to external functions (e.g., `std::cout`).
- Handles static/dynamic linking:
  - If statically linked, all necessary code is embedded into the executable.
  - If dynamically linked, the executable includes pointers to shared libraries.

**Output:** The executable file (`a.out`), which is ready to run.

---

#### **5. Execution**
When you run `./a.out`, the loader in your operating system loads the executable into memory:
- Dynamically linked libraries (`libstdc++.so`) are also loaded.
- Execution starts with the `main()` function.

**Output:** Displays:
```
Area of circle: 78.5398
```

---
