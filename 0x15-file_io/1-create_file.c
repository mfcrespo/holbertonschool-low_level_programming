#include "holberton.h"

/**
 * create_file - Create a function that creates a file
 *
 * @filename : name of the file to create
 * @text_content : is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 */


int create_file(const char *filename, char *text_content)
{
	int file_dest, length, file_write;

	if (filename == NULL)
		return (0);


	file_dest = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_dest == -1)
		return (-1);

	(text_content == NULL) ? text_content = "" : text_content;
	length = strlen(text_content);

	file_write = write(file_dest, text_content, length);

	if (file_write == -1)
		return (-1);

	return (1);

}
