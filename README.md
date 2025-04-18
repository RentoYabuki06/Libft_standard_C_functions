# Libft - Reimplementation of Standard C Library

## Overview
**Libft** is a project at 42Tokyo where students reimplement standard C library functions. This project strengthens low-level programming skills by implementing basic functions for string manipulation, memory management, and list operations.

---

## Project Objectives
1. **Understanding and Implementing Standard Functions**:
   - Reimplementing basic functions like `strlen`, `strcpy`, `atoi`, etc.
2. **Implementing Data Structures**:
   - Creating functions to manipulate linked lists.
3. **Enhancing C Programming Skills**:
   - Improving understanding of memory management and pointer operations.

---

## Directory Structure
```
libft/
├── includes/
│   └── libft.h       # Header file with function prototypes
├── srcs/
│   ├── conversion/   # Type conversion functions
│   ├── conditional/  # Character testing functions
│   ├── memory/       # Memory manipulation functions
│   ├── put_fd/       # Output functions
│   ├── string/       # String manipulation functions
│   └── bonus/        # Linked list functions
└── Makefile          # Compilation instructions
```

---

## Function Overview

### Conversion Functions
- **ft_atoi**: Converts a string to an integer
- **ft_atol**: Converts a string to a long integer
- **ft_itoa**: Converts an integer to a string
- **ft_tolower**: Converts uppercase letter to lowercase
- **ft_toupper**: Converts lowercase letter to uppercase

### Conditional Functions
- **ft_isalnum**: Tests if character is alphanumeric
- **ft_isalpha**: Tests if character is alphabetic
- **ft_isascii**: Tests if character is within ASCII range
- **ft_isdigit**: Tests if character is a digit
- **ft_isprint**: Tests if character is printable

### Memory Functions
- **ft_bzero**: Fills memory with zeros
- **ft_calloc**: Allocates and initializes memory
- **ft_memchr**: Locates byte in memory
- **ft_memcmp**: Compares memory areas
- **ft_memcpy**: Copies memory area
- **ft_memmove**: Copies memory area with overlap handling
- **ft_memset**: Fills memory with a constant byte

### Output Functions
- **ft_fprintf**: Writes formatted output to file descriptor
- **ft_putchar_fd**: Outputs a character to file descriptor
- **ft_putendl_fd**: Outputs string with newline to file descriptor
- **ft_putnbr_fd**: Outputs a number to file descriptor
- **ft_putstr_fd**: Outputs a string to file descriptor

### String Functions
- **ft_split**: Splits string into array by delimiter
- **ft_strchr**: Locates character in string
- **ft_strcmp**: Compares two strings
- **ft_strdup**: Duplicates a string
- **ft_striteri**: Applies function to each character with index
- **ft_strjoin**: Concatenates two strings
- **ft_strlcat**: Concatenates strings with size limitation
- **ft_strlcpy**: Copies string with size limitation
- **ft_strlen**: Calculates string length
- **ft_strmapi**: Maps function to each character of string
- **ft_strncmp**: Compares n characters of two strings
- **ft_strndup**: Duplicates n characters of a string
- **ft_strnstr**: Locates substring in string with length limit
- **ft_strrchr**: Locates last occurrence of character in string
- **ft_strtrim**: Trims characters from string
- **ft_substr**: Extracts substring from string

### Bonus Functions (Linked List)
- **ft_lstadd_back**: Adds node at the end of list
- **ft_lstadd_front**: Adds node at the beginning of list
- **ft_lstclear**: Deletes and frees list
- **ft_lstdelone**: Deletes one node
- **ft_lstiter**: Applies function to each node
- **ft_lstlast**: Returns last node
- **ft_lstmap**: Maps function to list and creates new list
- **ft_lstnew**: Creates new node
- **ft_lstsize**: Counts nodes in list

---

## Implementation Requirements
1. **Library Restrictions**:
   - Standard C library functions cannot be used (with some exceptions).
2. **Error Handling**:
   - Must properly handle invalid arguments and error states.
3. **Code Standards**:
   - Must comply with 42's Norm coding standards.

---

## Usage
### Requirements
- Linux or macOS
- `make` command and `gcc` compiler installed

### Compilation
```
make
```
### Usage in Your Code
```c
#include "libft.h"
```
---

## Learning Outcomes
- **Deep Understanding of Basic Functions**:
  Understanding and recreating the internal workings of standard functions.
- **Error Handling and Optimization**:
  Developing stable code design and performance improvements.

---

## References
- [42Tokyo Official Page](https://42tokyo.jp/)
---

## License
This project is part of the 42Tokyo curriculum and is for educational purposes. Redistribution and commercial use may be restricted.