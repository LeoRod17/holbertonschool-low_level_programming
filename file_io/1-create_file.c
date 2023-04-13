#include "main.h"

/**
 *create_file -a function that creates a file
 *@filename: the name of the file to create
 *@text_content: the content of the file
 *Return: an int that tells you if it is correct or incorrect
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";

	o = open(filename,  O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (o == -1)
		return (-1);

	w = write(o, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
