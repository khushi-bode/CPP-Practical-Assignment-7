# C++ Practical Assignment 7 — Polymorphism

## Problem statement
Write a C++ program to demonstrate runtime polymorphism using classes, inheritance, virtual functions, and function overriding.

## Concepts demonstrated
- **Inheritance:** `Dog` and `Cat` inherit from the `Animal` base class.
- **Virtual function:** `Animal::sound()` is declared with the `virtual` keyword.
- **Function overriding:** `Dog` and `Cat` provide their own `sound()` implementations using `override`.
- **Runtime polymorphism:** An `Animal*` base-class pointer refers to both derived objects. The correct overridden function is selected at runtime.

## Files
```text
.
├── main.cpp
├── README.md
├── output.txt
└── screenshots/
    └── output.png
```

## Requirements
- A C++ compiler (GCC/G++, MinGW, or the compiler included with Dev-C++).
- C++11 or later.

## Compile and run

### Windows (MinGW / GCC)
```bash
g++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o polymorphism.exe
polymorphism.exe
```

### Linux / macOS
```bash
g++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o polymorphism
./polymorphism
```

You can also open `main.cpp` in Dev-C++ and use **Compile & Run**.

## Expected output
```text
Dog barks.
Cat meows.
```

The program has no keyboard input. The two output lines are produced by calling `sound()` through the same base-class pointer while it points to a `Dog` object and then a `Cat` object.

## Test cases

| Test case | Pointer refers to | Expected output | Status |
|---|---|---|---|
| 1 | `Dog` object | `Dog barks.` | Pass |
| 2 | `Cat` object | `Cat meows.` | Pass |

## Result
The program demonstrates runtime polymorphism in C++ through inheritance, a virtual function, function overriding, and dynamic binding using a base-class pointer.

## Assignment questions

**1. What is polymorphism in C++?**  
Polymorphism is an OOP concept that allows the same interface or function call to exhibit different behaviors depending on the context or object.

**2. What is a virtual function?**  
A virtual function is a base-class member function declared with the `virtual` keyword that allows an overridden derived-class function to be selected at runtime through a base-class pointer or reference.

**3. What is function overriding?**  
Function overriding occurs when a derived class provides its own implementation of a virtual function inherited from its base class.
