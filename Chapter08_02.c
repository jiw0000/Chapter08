#include <stdio.h>
#include <ctype.h>

int main()
{
	int cnt = 0;
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		{
			printf("\\n : %3d, \n", ch);
			cnt = 0;
			continue;
		}
		else if (ch == '\t')
		{
			printf("\t : %3d, ", ch);
		}
		else if (ch <= 26)
		{
			printf("^%c : %3d, ", (ch + 64), ch);
		}
		else
		{
			printf(" %c : %3d, ", ch, ch);
		}

		cnt++;
		if (cnt / 10)
			printf("\n");
		cnt %= 10;
	}

}