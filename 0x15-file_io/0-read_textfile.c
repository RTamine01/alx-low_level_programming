#include "main.h"

#define READ_BUF_SIZE 1024

/**
 * read_textfile - read and print text from file
 * @filename: name of the file to read
 * @letters: number of bytes to read
 *
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char buf[READ_BUF_SIZE];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buf, READ_BUF_SIZE);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_written);
}
