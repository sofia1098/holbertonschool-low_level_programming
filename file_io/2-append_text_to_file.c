#include "main.h"
#include <fcntl.h>
#include <unistd.h>

int
append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr = 0;

	if (filename == NULL)
		return (-1);
	/*solo escribe al final y no crea un archivo sino existe*/
	fd = open(filename, O_WRONLY | O_APPEND);
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
