#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int ret;
	int fd;
	char *line;
int i = 0;
	fd = open(argv[1], O_RDONLY);
	while(i++ < 2)
	{
		ret = get_next_line(fd, &line);
		printf("%s\n", line);
	}
		printf("%i\n", ret);
	close(fd);
	return (0);
}
