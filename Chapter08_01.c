#include <stdio.h>

int main()
{
	int cnt = 0;
	int ch;

	while ((ch = getchar()) != EOF)
		cnt++;

	printf("���ڵ��� �� : %d\n", cnt);

}