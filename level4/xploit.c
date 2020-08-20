int m = 0;

void p(char *buffer)
{
	printf(buffer);
}

void n()
{
	char buffer[256];
	fgets(buffer, 56, 1);
	p(buffer);
	if (m == 16930116)
	{
		system("/bin/cat /home/user/level5/.pass");
	}
}

int main()
{
	n();
	return 0;
}