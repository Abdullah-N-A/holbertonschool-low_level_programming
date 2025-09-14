# 0x0A. C - malloc, free

Project focused on using `malloc` and `free` in C.

## Tasks

### 0. Float like a butterfly, sting like a bee
- Function that creates an array of chars, initialized with a specific char.  
- Prototype: `char *create_array(unsigned int size, char c);`

### 1. The woman who has no imagination has no wings
- Function that returns a pointer to a newly allocated string duplicate.  
- Prototype: `char *_strdup(char *str);`

### 2. He who is not courageous enough to take risks will accomplish nothing in life
- Function that concatenates two strings into newly allocated memory.  
- Prototype: `char *str_concat(char *s1, char *s2);`

### 3. If you even dream of beating me you'd better wake up and apologize
- Function that returns a pointer to a 2D array of integers initialized to 0.  
- Prototype: `int **alloc_grid(int width, int height);`

### 4. It's not bragging if you can back it up
- Function that frees a 2D grid previously created by `alloc_grid`.  
- Prototype: `void free_grid(int **grid, int height);`

---

## Compilation
All files are compiled with:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <task_file.c> -o <output>
