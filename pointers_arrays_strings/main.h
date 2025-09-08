#ifndef MAIN_H
#define MAIN_H
unsigned int _strspn(char *s, char *accept);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int _putchar(char c);
/* 0-strcat.c */
char *_strcat(char *dest, char *src);

/* 1-strncat.c */
char *_strncat(char *dest, char *src, int n);

/* 2-strncpy.c */
char *_strncpy(char *dest, char *src, int n);

/* 3-strcmp.c */
int _strcmp(char *s1, char *s2);

/* 4-rev_array.c */
void reverse_array(int *a, int n);

/* 5-string_toupper.c */
char *string_toupper(char *str);

/* 6-cap_string.c */
char *cap_string(char *str);

/* 7-leet.c */
char *leet(char *str);

/* 8-rot13.c */
char *rot13(char *str);
/* 0-memset.c */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
#endif /* MAIN_H */
