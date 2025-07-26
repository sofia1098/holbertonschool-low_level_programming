#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t
read_textfile(const char *file, size_t letters)
{
	char *str;
	ssize_t readd, writee;
	int fd;

	if (file == NULL)
		return (0);
	
	fd = open(file,O_RDONLY);
	if (fd == -1)
	{
		close(fd);
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
	}
	writee = write(fd, str, letters);
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
