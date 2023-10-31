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
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, (void *)buf, letters);
	bytes = write(STDOUT_FILENO, (const void *)buf, bytes);
	close(fd);
	return (bytes);
}
