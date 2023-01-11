#include <stdio.h>
#include <ctype.h>

float get_number(int);
void print_chart(void);


int main(void)
{
	char ch;
	float left_num = 0.0f;
	float right_num = 0.0f;
	float result = 0.0f;

	for (print_chart(); (ch = getchar()) != 'q'; print_chart())
	{

		left_num = get_number(1);
		right_num = get_number(2);

		switch (ch)
		{
		case 'a':
			result = left_num + right_num;
			printf("%.1f + %.1f = %.1f\n", left_num, right_num, result);
			break;
		case 's':
			result = left_num - right_num;
			printf("%.1f - %.1f = %.1f\n", left_num, right_num, result);
			break;
		case 'm':
			result = left_num * right_num;
			printf("%.1f * %.1f = %.1f\n", left_num, right_num, result);
			break;
		case 'd':
			while (right_num == 0)
			{
				printf("0이 아닌 다른 수를 입력하시오.\n");
				right_num = get_number(2);
			}
			result = left_num / right_num;
			printf("%.1f / %.1f = %.1f\n", left_num, right_num, result);
			break;
		}
	}
	printf("종료!\n");

	return 0;
}

float get_number(int mode)
{
	float num = 0;
	int check = 0;

	while (check != 1)
	{
		switch (mode)
		{
		case 1:
			printf("첫 번째 ");
			break;
		case 2:
			printf("두 번째 ");
			break;
		}

		printf("수를 입력하세요 : ");

		check = scanf("%f", &num);

		if (check == 0)
		{
			printf("다시 입력해 주세요.\n");
			printf("2.5, -1.78E8, 3과 같은 수를 입력해주세요.\n");
			while (getchar() != EOF)
				continue;
		}
	}
	while (getchar() != '\n')
		continue;

	return num;
}

void print_chart(void)
{
	printf("원하는 연산에 해당하는 문자를 선택하시오(끝내려면 q):\n");
	printf("a. add(덧셈)			s.subtract(뺄셈)\n");
	printf("m. multiply(곱셈)		d. divide(나눗셈)\n");
	printf("q. quit(종료)\n");
	printf("입력 : ");
}
