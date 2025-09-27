# Variadic Functions - Holberton School

This repository contains solutions for variadic functions tasks in C, using `<stdarg.h>`.

## Tasks Summary

| Task | Function | Description | Example |
|------|----------|-------------|---------|
| 0    | `sum_them_all` | Returns the sum of all integer parameters. Returns 0 if `n == 0`. | `sum_them_all(2, 98, 1024)` → 1122 |
| 1    | `print_numbers` | Prints integers separated by a given `separator`. Prints a newline at the end. | `print_numbers(", ", 4, 0, 98, -1024, 402)` → `0, 98, -1024, 402` |
| 2    | `print_strings` | Prints strings separated by a `separator`. Prints `(nil)` if a string is `NULL`. Newline at the end. | `print_strings(", ", 2, "Jay", "Django")` → `Jay, Django` |
| 3    | `print_all` | Prints any type based on `format`: `c` (char), `i` (int), `f` (float), `s` (string). Ignores unknown types. Prints newline at the end. | `print_all("ceis", 'B', 3, "stSchool")` → `B, 3, stSchool` |

## Notes
- All tasks focus on **variadic functions** using `stdarg.h`.  
- Practice handling variable numbers of arguments safely and efficiently.  
- Essential for low-level programming and flexible function design in C.

