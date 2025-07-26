#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t
read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t readd, writee;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{	close(fd);
		return (0);
	}

	readd = read(fd, str, letters);
	if (readd == -1)
	{
		free(str);
		close(fd);
		return (0);
	}

	writee = write(STDOUT_FILENO, str, letters);
	if (writee == -1)
	{
		free(str);
		close(fd);
		return (0);
	}
	free(str);
	close(fd);
	return (writee);
}
