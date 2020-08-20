int m = 0;

void v()
{
	char buffer[256];
	fgets(buffer, 256, 0);
	printf("%s\n", buffer);
	if (m == 64)
	{
		fwrite("Wait what?!\n", 1, 12, 1);
		system("/bin/sh");
	}
}

int main()
{
	v();
	return 0;
}