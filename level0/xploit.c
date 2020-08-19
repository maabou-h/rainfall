#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    if (atoi(av[1]) == 423)
    {
        char *shell = strdup("/bin/sh");
        gid_t gid = getegid();
        uid_t uid = geteuid();
        char *args[2] = {"sh",0};
        execv(shell, args);
    }
    else
        fwrite("No !\n", 1, 5, stderr);
    return 0;
}