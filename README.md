*Este proyecto ha sido creado como parte del currículo de 42 por dparra-s.*

# ft_printf - @42Born2Code

A custom re-implementation of the standard C library `printf` function, handling formatted output conversion and variadic arguments using `stdarg.h`.

---

## 📌 Overview

**ft_printf** is a mandatory project in the 42 core curriculum. The objective is to recreate C's versatile `printf()` function. Through this project, you learn about **variadic functions** (`va_start`, `va_arg`, `va_copy`, `va_end`), memory buffer management, number base conversions (decimal, hexadecimal, pointer addresses), and modular program design in C.

The resulting library (`libftprintf.a`) can be reused in future 42 projects where formatted text output is needed.

---

## 📑 Supported Conversion Specifiers

`ft_printf` handles the following standard format specifiers:

| Specifier | Description | Example Output |
| :---: | :--- | :--- |
| `%c` | Prints a single character | `'A'` |
| `%s` | Prints a string of characters | `"Hello, World!"` |
| `%p` | Prints a `void *` pointer argument in hexadecimal format with a `0x` prefix | `0x7ffeefbff5c0` |
| `%d` | Prints a signed decimal integer | `-42` |
| `%i` | Prints a signed integer in base 10 | `42` |
| `%u` | Prints an unsigned decimal integer | `4294967295` |
| `%x` | Prints an unsigned integer as lowercase hexadecimal | `2a` |
| `%X` | Prints an unsigned integer as uppercase hexadecimal | `2A` |
| `%%` | Prints a literal percent sign | `%` |

---

## 🛠 Compilation & Rules

The compilation is managed via a `Makefile` following 42 School standards:

| Command | Action |
| :--- | :--- |
| `make` / `make all` | Compiles source files and archives them into `libftprintf.a`. |
| `make clean` | Deletes object files (`.o`). |
| `make fclean` | Deletes object files and `libftprintf.a`. |
| `make re` | Performs a clean re-compilation (`fclean` + `all`). |

---

## 🚀 How to Use

### 1. Integration

1. Clone the repository into your project directory:
   ```bash
   git clone [https://github.com/davidrps/42_printf.git](https://github.com/davidrps/42_printf.git) ft_printf

```

2. Build the static library:
```bash
cd ft_printf
make

```


3. Include the header file in your C code:
```c
#include "libftprintf.h"

```



### 2. Code Example

```c
#include "libftprintf.h"

int main(void)
{
    int printed_chars;

    printed_chars = ft_printf("Hello %s! The answer is %d (hex: 0x%x).\n", "42", 42, 42);
    ft_printf("Total characters written: %d\n", printed_chars);

    return (0);
}

```

### 3. Compilation with Your Program

Compile your program linking `libftprintf.a`:

```bash
gcc -Wall -Wextra -Werror main.c -Lft_printf -lftprintf -o my_program
./my_program

```

---

## 📜 Code Style & Compliance

* Written in C adhering strictly to 42's **Norminette** coding standard.
* Compiled using the standard flags: `-Wall -Wextra -Werror`.
* Memory allocations are safely handled without leaks.

### Resources
- https://learn.microsoft.com
- https://www.ibm.com/docs/es/aix/7.2.0
- [gemini](https://gemini.google.com/app) to generate tests and the readme file.