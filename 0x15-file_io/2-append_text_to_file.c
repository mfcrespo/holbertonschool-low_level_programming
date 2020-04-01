#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename : the name of the file
 * @text_content : the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file_dest, length, file_write;

	if (filename == NULL)
		return (-1);


	file_dest = open(filename, O_RDWR | O_APPEND);

	if (file_dest == -1)
		return (-1);

	(text_content == NULL) ? text_content = "" : text_content;
	length = strlen(text_content);

	file_write = write(file_dest, text_content, length);

	if (file_write == -1)
		return (-1);

	return (1);

}
