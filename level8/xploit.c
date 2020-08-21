int	main(ac, av)
	int ac;
	char **av;
{
    char buff[128];
	char *auth = NULL;
	char *service = NULL;
    while (true)
    {
        printf("%p, %p\n", auth, service);
        if (!fgets(buff, 128, 0))
            break;
        if (strncmp(buff, "auth ", 5) == 0)
		{
			auth = malloc(4);
			if (strlen(buff + 5) < 31)
					strcpy(auth, buff + 5);	
		}
        if (!strncmp(buffer, "reset", 5))
			free(auth);
		if (!strncmp(buffer, "service", 6))
			service = strdup(buff + 7);
		if (!strncmp(buffer, "login", 5))
		{
			if (!auth[32])
                system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, 1);
		}
    }
    return 0;
}