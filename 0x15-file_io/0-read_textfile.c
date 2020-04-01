#include "holberton.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename : given file
 * @letters : number of letters
 *
 * Return: the actual number of letters it could read and print,
 * or 0 if the file can not be opened or read, filename is NULL.
 * or if write fails or does not write the expected amount of bytes
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t output;
	int file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (-1);

	output = open(filename, O_RDONLY);

	if (output == -1)
		return (0);

	file_read = read(output, buffer, letters);

	if (file_read == -1)
		return (0);

	file_write = write(STDOUT_FILENO, buffer, file_read);

	if (file_write == -1)
		return (0);

	close(output);

	free(buffer);
	return (file_read);

}
