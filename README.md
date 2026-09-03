![Logo](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSvo8TqXRBc1X_Jdgo7MM5YknbGx19CIS4n-AZ_CR4n_73Ar5nR9-UYUX5m&s=10)


*This project has been created as part of the 42 curriculum by manand.*

## Description
Libft is the first project of the 42 core curriculum. The goal of this project is to re-create a selection of standard C library functions from scratch, as well as additional utility functions for string handling, dynamic memory management, file descriptor operations, and linked list manipulation. 

Building this custom library helps build a fundamental understanding of low-level C programming, algorithm optimization, and manual memory management. The resulting library (`libft.a`) serves as a foundational tool re-used in subsequent school assignments.

## Instructions

### Compilation
To compile the library, clone the repository and run `make` inside the root directory:
```
$ make
```

For __bonus__ functions:
```
$ make bonus
```

### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use the library functions in your code, simply include this header:
```
#include "libft.h"
```


## Resources

* **Documentation & Manuals:**
  * [GNU C Library Manual](https://www.gnu.org/software/libc/manual/): Complete reference for standard libc functions.
  * [C Reference - cppreference.com](https://en.cppreference.com/w/c): Detailed documentation on C syntax, types, and standard library headers.
  * Standard Linux manual pages (`man 3 malloc`, `man 3 atoi`, `man 3 memcpy`).
* **Articles & Guides:**
  * [Understanding Linked Lists in C](https://www.geeksforgeeks.org/data-structures/linked-list/): Visualizations and concepts for pointer-based list manipulation.
  * [Memory Allocation & Leak Checking with Valgrind](https://valgrind.org/docs/manual/quick-start.html): Guide for identifying memory bugs and out-of-bounds array access.

### AI Usage

AI was used as an interactive debugging and code-review assistant throughout the project[cite: 1]. Specifically:

* **Part 1 (Libc Functions):**
  * **Tasks:** Resolving edge cases in `ft_atoi` (handling whitespace, signs, and preventing bad loops) and preventing integer overflow in `ft_calloc`[cite: 1].
* **Part 2 (Additional Functions):**
  * **Tasks:** Identifying buffer overflow logic and memory allocation sizing errors in `ft_itoa`.
* **Part 3 (Linked Lists):**
  * **Tasks:** Fixing syntax/declaration mismatch errors in list traversal functions (`ft_lstadd_back` and `ft_lstlast`)[cite: 1].
* **Project Setup:**
  * **Tasks:** Debugging `Makefile` directory paths for local unit testing suites and verifying `README.md` layout requirements[cite: 1].
