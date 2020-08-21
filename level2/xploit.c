
void	p()
{
	char buff[68];
	fflush(1);
	gets(buff);
	if (((void*)(buff + 64) & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", (void*)(buff + 64));
		exit(1);
	}
		puts(buff);
		strdup(buff);
}

int	main(ac, av)
	int ac;
	char **av;
{
	p();
	return 0;
}
