#include <stdlib.h>
#include <stdio.h>

void run(void)
{
    fwrite("Good... Wait what?\n", 1, 19, stdout);
    system("/bin/sh");
}

int	main(ac, av)
	int ac;
	char **av;
{
    gets(64);
    return (0);
}