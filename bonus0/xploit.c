void p(buff, dash)
    char *buff;
    char *dash;
{
	char rb[4096];
	puts(dash);
	read(1, rb, 4096);
	char *tmp = strchr(rb, '\n');
	*tmp = '\0';
	strncpy(buff, rb, 20);
}

void pp(buff)
    char *buff;
{
	char a[20];
	char b[20];
	p(a, " - ");
	p(b, " - ");
	strcpy(buff, a);
	buff[strlen(buff)] = ' ';
	strcat(buf, b);
}

int main(ac, av)
	int ac;
	char **av;
{
	char buff[42];
	pp(buff);
	puts(buff);
	return 0;
}