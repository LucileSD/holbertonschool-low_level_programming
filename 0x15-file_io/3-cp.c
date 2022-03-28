#include "main.h"
/**
 * main - copy a file into an other
 * @argc: arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_to, *fl_from;
	int fd, fd2, write_file, close_file, read_file = 1, close_file2;
	char buff[BUFFER_SIZE];

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fl_from = argv[1], file_to = argv[2];
	fd = open(fl_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fl_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while (read_file != 0)
	{
		read_file = read(fd, buff, BUFFER_SIZE);
		if (read_file < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fl_from);
			exit(98);
		}
		write_file = write(fd2, buff, read_file);
		if (write_file < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	close_file = close(fd), close_file2 = close(fd2);
	if (close_file < 0 || close_file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd == -1 ? fd : fd2);
		exit(100);
	}
	return (0);
}
