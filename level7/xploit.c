char buff[68];

void m()
{
    printf("%s - %ld\n", buff, time((void*)0));
}

int	main(ac, av)
	int ac;
	char **av;
{
    void *ma = malloc(8);
    ma[0] = 1;
    ma[1] = malloc(8);
    void *mb = malloc(8);
    mb[0] = 1;
    mb[1] = malloc(8);
    strcpy(ma[1], av[1]);
    strcpy(mb[1], av[2]);
    FILE *stream = fopen("/home/user/level8/.pass", "r");
    fgets(buff, 68, stream);
    puts("~~");
    return 0;
}