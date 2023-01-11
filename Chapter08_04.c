#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int ch;
	int char_cnt = 0;
	int word_cnt = 0;
	bool first_char_flag = true;

	while ((ch = getchar()) != EOF)
	{
		if (!isspace(ch) && !ispunct(ch))
		{
			if (first_char_flag)
				word_cnt++;

			first_char_flag = false;

			char_cnt++;
		}
		else
			first_char_flag = true;
	}

	printf("ÃÑ ¹®ÀÚ ¼ö : %d\n", char_cnt);
	printf("ÃÑ ´Ü¾î ¼ö : %d\n", word_cnt);
	printf("Æò±Õ ´Ü¾î ¼ö : %.2f\n", ((double)char_cnt / word_cnt));

}