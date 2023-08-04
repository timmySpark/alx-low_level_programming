#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);

size_t _strlen(const char *s);

void _puts(char *s);

char *_strcpy(char *dest, const char *src);

int _atoi(char *s);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

char *_strchr(char *s, char c);

void *_memset(void *s, int c, size_t n);
void *_memcpy(void *dest, const void *src, size_t n);


unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
