/**
 * _memset - fills memory
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates char in string
 */
char *_strchar(char *s, char c);

/**
 * _strspn - get length
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - occurence of byte
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - needle in stack
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print board
 */
void print_chessboard(char (*a)[8]);
