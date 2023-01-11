#include <stdio.h>

int main()
{
	int guess = 0;
	int max_guess = 100;
	int min_guess = 1;
	char response = 'y';

	guess = (max_guess + min_guess) / 2;

	printf("%d에서 %d까지 범위에 있는 한 정수를 생각하시오.\n", min_guess, max_guess);

	while (response != 'o')
	{
		printf("당신이 생각한 수가 %d보다 큽니까?\n", guess);
		printf("당신이 생각한 수보다 높으면 y로 응답하고,\n");
		printf("낮으면 n으로 응답하시오.\n");
		printf("만약 당신이 생각한 수가 맞으면 o를 입력하시오.\n");

		response = getchar();

		switch (response)
		{
		case 'y':
			min_guess = guess;
			guess = (max_guess + min_guess) / 2;
			break;
		case 'n':
			max_guess = guess;
			guess = (max_guess + min_guess) / 2;
			break;
		case 'o':
			break;
		default:
			printf("미안하지만, (y, n, o)으로만 입력해주시오.\n");
		}
		while (getchar() != '\n')
			continue;
	}

}