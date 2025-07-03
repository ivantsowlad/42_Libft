# 42_libft

This project is part of the 42Prague curriculum.

## Overview

**libft** is a custom implementation of the standard C library functions. The goal of this project is to create a personal library of commonly used C functions, which can be reused in future projects during the 42 curriculum. This project helps to deepen the understanding of C programming, memory management, and implementation of basic algorithms.

## Features

- Reimplementation of standard C library functions:
  - Character checks and transformations (e.g., `ft_isalpha`, `ft_isdigit`, `ft_toupper`, `ft_tolower`, ...)
  - String manipulation (e.g., `ft_strlen`, `ft_strcpy`, `ft_strncmp`, ...)
  - Memory management (e.g., `ft_memset`, `ft_memcpy`, `ft_bzero`, ...)
  - Other utility functions (e.g., `ft_atoi`, `ft_calloc`, ...)
- Adheres to the 42 coding standards.

## Directory Structure

```
.
├── *.c
├── *.h
└── Makefile
```

## How to Use

1. **Clone the repository:**
    ```bash
    git clone https://github.com/ivantsowlad/libft.git
    cd libft
    ```

2. **Build the library:**
    ```bash
    make
    ```
   This will generate the `libft.a` static library file.

3. **Include in your project:**
   - Add `libft.a` to your project's linking step.
   - Include `libft.h` in your source files.

    ```c
    #include "libft.h"
    ```

4. **Clean built files:**
    ```bash
    make clean      # Removes object files
    make fclean     # Removes object files and libft.a
    make re         # Rebuilds the library
    ```

## Example

```c
#include "libft.h"
#include <stdio.h>

int main()
{
    char str[] = "Hello, world!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```

Compile and link with the library:
```bash
gcc main.c -L. -lft
```

## Requirements

- GCC or compatible C compiler
- Make

## Notes

- The implementation does not use any functions from the C standard library except write, malloc, and free, as per 42 project requirements.
- All functions are prefixed with `ft_` to avoid conflicts.

## License

This project is part of the 42Prague curriculum and is intended for educational use.

## Author

- [ivantsowlad](https://github.com/ivantsowlad)
