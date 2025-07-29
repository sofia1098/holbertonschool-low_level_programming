#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int
_cp(const char *file_from, const char *file_to)
{
	int fd_f, fd_t, rd, wr;

	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		return (97);
	}
	fd_f = open(file_from, O_RDONLY); /*abro file para leer*/
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		return (98);
	}
	fd_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t == -1)
	{
		close(fd_f),
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	while ((rd = read(fd_f, buffer, 1024)) > 0)
	{
		wr = write(fd_t, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			close(fd_f);
			close(fd_t);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	}

	if (rd == -1)
	{
		close(fd_f);
		close(fd_t);
		dprintf(STDERR_FILENO, "Error: Can't read from	%s\n", file_from);
		return (98);
	}
	if (close(fd_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f);
		return (100);
	}
	if (close(fd_t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
		return (100);
	}
	close(fd_f);
	close(fd_t);
	return (0);
}

int
main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
