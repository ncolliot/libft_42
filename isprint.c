#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return(1);
	else
		return(0);
}

int	main()
{
	char cha;

	cha = 'b';
	printf("ch1: %d\n", ft_isprint(cha));
	printf("ch1: %d\n\n", isprint(cha));

	cha = '@';
	printf("ch2: %d\n", ft_isprint(cha));
	printf("ch2: %d\n\n", isprint(cha));

	cha = ' ';
	printf("ch3: %d\n", ft_isprint(cha));
	printf("ch3: %d\n\n", isprint(cha));

	cha = '\n';
	printf("ch4: %d\n", ft_isprint(cha));
	printf("ch4: %d\n\n", isprint(cha));

	cha = '\t';
	printf("ch5: %d\n", ft_isprint(cha));
	printf("ch5: %d\n\n", isprint(cha));
}