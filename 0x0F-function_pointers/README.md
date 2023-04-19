0x0F. C - Function pointers

Requirements

General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
- Don’t forget to push your header file
- All your header files should be include guarded.

1. Task 0 - 0-print_name.c - a function that prints a name.

2. Task 1 - 1-array_iterator.c - a function that executes a function given as a parameter on each element of an array.

3. Task 2 - 2-int_index.c - a function that searches for an integer.

4. Task 3 - 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h - a program that performs simple operations.

3-calc.h - This file should contain all the function prototypes and data structures used by the program.

3-op_functions.c - This file should contain the 5 following functions (not more):

	1. op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	2. op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	3. op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	4. op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	5. op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3-get_op_func.c - This file should contain the function that selects the correct function to perform the operation asked by the user.

3-main.c - This file should contain your main function only.

5. Task 4 - 100-main_opcodes.c - a program that prints the opcodes of its own main function.
