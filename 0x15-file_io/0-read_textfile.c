#include "main.h"

/**
 * read_textfile - read a textfile and print it to POSIX
 * @filename: name of filename
 * @letters: number of letter it should be read and print
 * Return: number of letter to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}
	byte = read(fd, buff, letters);
	if (byte == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	byte = write(STDOUT_FILENO, buff, byte);
	if (byte == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (byte);
}
