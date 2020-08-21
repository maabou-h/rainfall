int main(ac, av)
	int ac;
	char **av;
{
	char buffer[64];
	int k = atoi(av[1]);
	if (k < 10)
	{
		memcpy(buffer, av[2], k * 4);
		if (k == 0x574f4c46)
		{
			execl("/bin/sh");
		}
	}
	return 0;
}