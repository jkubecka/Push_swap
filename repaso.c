/* #include <unistd.h>

void putstr(char *str)
{
	int i = 0;
	while(str[i]) // = while(aux)
		write(1, &str[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while(str[i + 1]) // = while(aux->next)
		write(1, &str[i++], 1);
	write(1, "\n", 1);
	i = 0;
	while(str[i + 2]) // = while(aux->next->next)
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc == 1)
		return(1);
	putstr(argv[1]);
} */