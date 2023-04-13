#include "main.h"

/**
 *append_text_to_file -a function that appends text at the end of a file
 *@filename: the file we want to use
 *@text_content: what we want to write
 *Return: an int that will tell if it is right or not
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w;

if (!filename)
	return (-1);
if (!text_content)
	text_content = "";

o = open(filename, O_RDWR | O_CREAT | O_APPEND);
if (o == -1)
	return (-1);

w = write(o, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
close(0);
return (1);
}
