#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - prints the character
 */
int _putchar(char c);
/**
 * _isLower - check if the letters are in lowercase
 * @c: the character to check
 * Return: 1 if true  an d0 if false
 */
int _abs(int c);
/**
 * _abs - print absolute value of an integer
 * @int: data type for parameter
 * Return: 0 for success
 */
int _abs(int);
/**
 * _isuppper - check uppercase
 * @c: integer to check
 * Return: 1 for success and 0 for no uppercase
 */
int _isupper(int c);
/**
 * _stract - function tht jins two strings
 */
char *_strncat(char *dest, char *src, int n);
/**
 * _strncpy - copy string within n bytes
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - function that compares two strings
 */
int _strcmp(char *s1, char *s2);

int _strlen(char *s);

void _puts(char *str);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

int _putchar(char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

#endif
