#include <stdio.h>

int main()
{
	int cnt = 0;
	int ch;

	while ((ch = getchar()) != EOF)
		cnt++;

	printf("문자들의 수 : %d\n", cnt);

}