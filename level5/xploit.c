void o()
{
	system();
	exit(0);
}

void n()
{
	char buffer[256];

	buffer = fgets(buffer, 256, 1);
	printf("%s\n", buffer);
	exit(0);
}

int main()
{
	n();
	return 0;
}