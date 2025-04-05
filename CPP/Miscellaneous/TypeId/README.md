# How to Check if Two Different Objects Belong to the Same Class in C++

In C++, determining if two objects belong to the same class can be done using the `typeid` operator, which is part of the `<typeinfo>` library. The `typeid` operator helps to retrieve type information about objects at runtime.

---

## Objective:
Learn how to:
1. Compare the type of two objects using `typeid`.
2. Understand the behavior of `typeid` for different scenarios.
3. Differentiate between checking object types and checking object addresses.

---

## Explanation:

### Using `typeid`:
The `typeid` operator evaluates the runtime type of an object. It compares the type information of two objects by comparing their `type_info` identifiers. If both objects belong to the same class, the identifiers will match.

---

### Example Code:

Here is a complete example to demonstrate how to check if two objects belong to the same class and explain scenarios where the comparison may vary:

Implementation File: [Typeid_Example1.cpp](./Typeid_Example1.cpp)

---

### Output:
When running the above code, the output would be:
```
a1 and b1 belong to different classes.
a1 and a2 belong to the same class.
a1 and a2 are different objects.
```

---

### Explanation of Output:
1. `typeid(a1) == typeid(b1)` returns `false`, as `a1` and `b1` belong to different classes (`A` and `B`).
2. `typeid(a1) == typeid(a2)` returns `true`, as both `a1` and `a2` are objects of the same class (`A`).
3. Comparing `&a1 == &a2` evaluates to `false`, as `a1` and `a2` are two distinct instances of the class and have different memory addresses.

---

## Key Points:
1. Use `typeid` to compare object types at runtime.
2. The `typeid` operator works well with polymorphism and can be used to check the type of derived and base class objects.
3. Comparing object addresses with `&` determines if two objects are the exact same instance, not just of the same type.

---

## Notes:
- `typeid` is part of the `<typeinfo>` header.
- Using `typeid` with pointers, polymorphic classes, or dynamic types can give different results; be mindful of how objects are compared in such cases.
```

Let me know if you'd like further refinements! 🚀
