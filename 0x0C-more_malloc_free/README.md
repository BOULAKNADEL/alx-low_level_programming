# 0x0C. C - More malloc, free

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- **How to use the exit function**: The `exit` function is used to terminate a program and return control to the operating system. It takes an integer argument which is returned to the operating system as the program's return code. For example, `exit(0)` indicates successful program termination.

- **What are the functions calloc and realloc from the standard library and how to use them**: 
  - `calloc`: This function dynamically allocates memory for an array of a certain size, initialized to zero. The syntax is `void* calloc(size_t num, size_t size)`, where `num` is the number of elements and `size` is the size of each element.
  - `realloc`: This function changes the size of the memory block pointed to by a given pointer. The syntax is `void* realloc(void* ptr, size_t size)`, where `ptr` is a pointer to the memory area to be resized and `size` is the new size in bytes.

