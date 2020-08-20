void n()
{
    system("/bin/cat /home/user/level7/.pass");
}

void m()
{
    puts("Nope");
}

int	main(ac, av)
	int ac;
	char **av;
{
    void *ma = malloc(64);
    void *mb = malloc(4);
    void (*fun)();
    mb = m;
    strcpy(ma, av[1]);
    fun = mb;
    fun();
}