# C Pointer Misuse Example

This repository demonstrates a common error in C programming: incorrect usage of pointers, leading to unexpected modifications of variables. The `bug.c` file contains the erroneous code, while `bugSolution.c` provides a corrected version.

## Bug Description
The main issue lies in how the pointer `ptr` interacts with the variable `x`.  Without careful attention to memory management and pointer arithmetic, this can lead to subtle and hard-to-detect bugs.  The code shows how modifying the value pointed to by `ptr` unexpectedly alters the value of `x`.  This can be problematic if dealing with large data structures or in concurrent programming scenarios.

## Solution
The solution demonstrates how to safely manage pointers, making the code more robust.  It addresses the core problem by ensuring that pointer operations are within the bounds of allocated memory and properly reflect expected behavior.

## How to Run
Compile and run each `.c` file using a C compiler (like GCC):
```bash
gcc bug.c -o bug
./bug
gcc bugSolution.c -o bugSolution
./bugSolution
```