#include "main.h"
/**
 * create_file - creates a file
 * @fileanme: the file created
 * @text_content: the text in the file
 * Return: 1 if succeed
 */
int create_file(const char *filename, char *text_content)
{
	int creat_file, write_file, close_file;

	if (filename == NULL)
		return (-1);

	creat_file = open(filename, O_RDWR | O_CREAT | O_CREAT, 0600);
	if (creat_file < 0)
		return (-1);

	if (text_content == NULL)
		return (-1);

	write_file = write(creat_file, text_content, strlen(text_content));
	if (write_file < 0)
		return (-1);

	close_file = close(creat_file);
	if (close_file < 0)
		return (-1);

	return (1);
}
