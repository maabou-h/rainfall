void p(char *buffer)
{
	printf("%s\n", buffer);
}

void n()
{
	int m = 0;
	char buffer[256];

	buffer = fgets(buffer, 56, 1);
	p(buffer);
	if (m == 16930116)
	{
		system(" && cat /home/user/level5/.pass");
	}
}

int main()
{
	n();
	return 0;
}