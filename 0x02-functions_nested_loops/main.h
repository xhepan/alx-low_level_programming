/**
 * print_alphabet - uses _putchar() to print alphabet
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char c;
	for (c='a'; c<='z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
