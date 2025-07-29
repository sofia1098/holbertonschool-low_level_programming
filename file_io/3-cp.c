#include "main.h"
#include <unistd.h>

int cp(const char *file_from,const char *file_to)
{
	int fd_f, fd_t, rd, wr;

	char *buffer[1024];

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		return (97);
	}
	fd_f = open(file_from, O_RDONLY); /*abro file para leer*/
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
                return (98);
	}
	fd_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t == -1)
	{
		close(fd_f),
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_t);
		return (99);
	}
	
       	rd = read(fd_f, buffer, 1024);
	wr = write(fd_t, buffer,1024);
	if (wr == -1)
	{
		close(fd_f);
		close(fd_t);
		 dprintf(STDERR_FILENO, "Error: Can't write to %s'n", fd_t);
	}
	close(fd_f);
	close(fd_t);
	return(0);
}







	

}
