void o()
{
	system("/bin/sh");
	_exit(0);
}

void n()
{
	char buffer[256];
	fgets(buffer, 256, 1);
	printf(buffer);
	exit(0);
}

int main()
{
	n();
	return 0;
}