int main(ac, av)
	int ac;
	char **av;
{
    FILE *stream = fopen("/home/user/end/.pass", "r");
    char ba[66];
    char bb[65];
	if (av[1] && stream)
    {
	    fread(ba, 1, 66, stream);
	    ba[atoi(av[1])] = '\0';
	    fread(bb, 1, 65, stream);
	    if (!strcmp(ba, av[1]))
	    	execl("/bin/sh", "sh");
	    else
		    puts(bb);
        return 0;
    }
	return -1;
}