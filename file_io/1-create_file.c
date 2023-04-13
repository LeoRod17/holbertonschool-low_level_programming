#include "main.h"

/**
 *create_file -a function that creates a file
 *@filename: the name of the file to create
 *@text_content: the content of the file
 *Return: an int that tells you if it is correct or incorrect
 */
int create_file(const char *filename, char *text_content)
{
	int o, r, w;

	o = open(filename,  O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	r = read(o, text_content, strlen(text_content));
	if (r == -1)
		return (-1);
	w = write(o, text_content, r);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
