#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file
 * @text_content: the text in the file
 * Return: 1 if the file exits
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_file, close_file;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	write_file = write(fd, text_content, len);
	if (write_file < 0)
		return (-1);

	close_file = close(fd);
	if (close_file < 0)
		return (-1);

	return (1);
}
