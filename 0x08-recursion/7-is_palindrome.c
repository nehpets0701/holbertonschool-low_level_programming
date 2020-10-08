#include "holberton.h"

/**
 *_strlen_recursion-length
 *Return:int
 *@s:input
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *checkPal-palindrome
 *Return:int
 *@start:start
 *@end:end
 *@s:input
 */
int checkPal(int start, int end, char *s)
{
	if (end <= start)
		return (1);
	if (s[start] == s[end])
	{
		return (checkPal(start + 1, end - 1, s));
	}
	else
		return (0);
}

/**
 *is_palindrome-palindrome
 *Return:0/1
 *@s:input
 */
int is_palindrome(char *s)
{
	return (checkPal(0, _strlen_recursion(s) - 1, s));
}
