#include "libft.h"
#include <fcntl.h>

int main()
{
	int		fd;
	int		iteration;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	line = "blabla";
	iteration = 0;
	while (line)
	{
		line = get_next_line(fd);
		if (line)
			ft_printf("Iteration %d, line: %sMemory address: %p\n", iteration, line, line);
		free(line);
		iteration++;
	}
	close(fd);
	return 0;
}
