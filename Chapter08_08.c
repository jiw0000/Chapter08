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
				printf("0�� �ƴ� �ٸ� ���� �Է��Ͻÿ�.\n");
				right_num = get_number(2);
			}
			result = left_num / right_num;
			printf("%.1f / %.1f = %.1f\n", left_num, right_num, result);
			break;
		}
	}
	printf("����!\n");

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
			printf("ù ��° ");
			break;
		case 2:
			printf("�� ��° ");
			break;
		}

		printf("���� �Է��ϼ��� : ");

		check = scanf("%f", &num);

		if (check == 0)
		{
			printf("�ٽ� �Է��� �ּ���.\n");
			printf("2.5, -1.78E8, 3�� ���� ���� �Է����ּ���.\n");
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
	printf("���ϴ� ���꿡 �ش��ϴ� ���ڸ� �����Ͻÿ�(�������� q):\n");
	printf("a. add(����)			s.subtract(����)\n");
	printf("m. multiply(����)		d. divide(������)\n");
	printf("q. quit(����)\n");
	printf("�Է� : ");
}
