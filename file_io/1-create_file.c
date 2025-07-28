#include "main.h"
#include <stdlib.h>
#include <unistd.h>

int
create_file(const char *filename, char *text_content)
{
	int fd, wr = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/**
	 * O_WRONLY: escribir
	 * O_CREAT: crear si no existe
	 * O_TRUNC: vaciar el contenido si ya existe
	 */

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
