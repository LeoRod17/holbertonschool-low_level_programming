#include "main.h"

/**
 *read_textfile - a function that reads a file
 *@letters: how much it is going to read
 *@filename: which file is going to read
 *Return: the content of the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, ret, w;
	char *s;

	s = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	ret = read(f, s, letters);
	if (ret == -1)
		return (0);

	w = write(STDOUT_FILENO, s, ret);
	if (w == -1)
		return (0);

	close(f);
	free(s);
	return (w);

}
