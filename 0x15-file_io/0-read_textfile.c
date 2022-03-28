#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should be print
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, read_file, write_file, close_file;
	char *buff;

	open_file = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);

	if (open_file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	read_file = read(open_file, buff, letters);
	if (read_file == -1)
		return (0);

	write_file = write(STDOUT_FILENO, buff, read_file);
	if (write_file == -1)
		return (0);

	close_file = close(open_file);
	if (close_file == -1)
		return (0);

	return (write_file);
}
