# 0x15. C - File I/O

This project covers basic file input/output in C using **system calls**: `open`, `read`, `write`, and `close`.

---

## Learning Objectives

- How to open, read, write, and close files using system calls  
- What file descriptors are and how they work  
- File permissions and flags (`O_RDONLY`, `O_WRONLY`, `O_RDWR`, etc.)  
- Error handling with system calls  

---

## Tasks

### 0. Tread lightly, she is near
**File:** `0-read_textfile.c`  
Reads a text file and prints its content to `STDOUT`.  
Returns the actual number of letters read and printed.  
Returns `0` if the file can’t be opened, read, or written.

---

### 1. Under the snow
**File:** `1-create_file.c`  
Creates a file and writes text into it.  
- Truncates if it already exists.  
- Permissions: `rw-------` (0600).  
- Returns `1` on success, `-1` on failure.  
If `text_content` is `NULL`, an empty file is created.

---

### 2. Speak gently, she can hear
**File:** `2-append_text_to_file.c`  
Appends text at the end of an existing file.  
- Does **not** create the file if it doesn’t exist.  
- Returns `1` on success, `-1` on failure.  
If `text_content` is `NULL`, nothing is added but it still returns `1`.

---

### 3. cp
**File:** `3-cp.c`  
Copies the content of one file to another.  
- Uses a 1024-byte buffer.  
- Truncates destination file if it exists.  
- Permissions: `rw-rw-r--` (0664).  
- Proper error handling with exit codes:
  - `97`: Wrong number of arguments  
  - `98`: Can’t read from source file  
  - `99`: Can’t write to destination file  
  - `100`: Can’t close file descriptor  

---

## Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file> <task_file>.c -o <output>
