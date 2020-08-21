Class N
{
    int n;
	char s[100];

    N(int v)
    {
        .n = v;
    }
    operator+(N v)
    {
        return .n + v.n;
    }
    operator-(N v)
    {
        return .n - v.n;
    }
    setAnnotation(char *st)
	{
		memcpy(.s, st, strlen(st));
	}
}

int	main(ac, av)
	int ac;
	char **av;
{
    if (ac < 2)
        exit(1);
    N na = new N(5);
    N nb = new N(6);
    na.setAnnotation(av[1]);
    return na + nb;
}