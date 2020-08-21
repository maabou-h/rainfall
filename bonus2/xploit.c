int language = 0;

int greetuser(message)
    char *message;
{
    char bc[20];
    if (language == 1)
        strcpy(bc, "Hyvää päivää ");
    else if (language == 2)
        strcpy(bc, "Goedemiddag! ");
    else if (language == 0)
        strcpy(bc, "Hello! ");
    strcat(bc, message);
    puts(bc);
}

int main(ac, av)
	int ac;
	char **av;
{
    char ba[40];
    char bb[32];
    char *lang;
    if (ac == 3)
    {
        strncpy(ba, av[1], 40);
        strncpy(bb, av[2], 32);
        if ((lang = getenv("LANG")) != NULL)
        {
            if (!(memcmp(lang, "fi", 2)))
                language = 1;
            if (!(memcmp(lang, "nl", 2)))
                language = 2;
        }
        greetuser(av[1]);
    }
    return 0;
}