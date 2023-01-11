#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	int lower_cnt = 0;
	int upper_cnt = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			lower_cnt++;

		else if (isupper(ch))
			upper_cnt++;
	}

	printf("\n소문자 수 : %d\n", lower_cnt);
	printf("대문자 수 : %d\n", upper_cnt);

}