/**
 * _strchr - Locate the first occurence of a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurence of the character
 * or NULL, if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	/* If @c is '\0', then return a pointer for the last byte of @s */
	if (c == *(s + i))
		return (s + i);
	return (0);
}
