#include <stdio.h>

int main()
{
	int guess = 0;
	int max_guess = 100;
	int min_guess = 1;
	char response = 'y';

	guess = (max_guess + min_guess) / 2;

	printf("%d���� %d���� ������ �ִ� �� ������ �����Ͻÿ�.\n", min_guess, max_guess);

	while (response != 'o')
	{
		printf("����� ������ ���� %d���� Ů�ϱ�?\n", guess);
		printf("����� ������ ������ ������ y�� �����ϰ�,\n");
		printf("������ n���� �����Ͻÿ�.\n");
		printf("���� ����� ������ ���� ������ o�� �Է��Ͻÿ�.\n");

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
			printf("�̾�������, (y, n, o)���θ� �Է����ֽÿ�.\n");
		}
		while (getchar() != '\n')
			continue;
	}

}