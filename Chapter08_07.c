#include <stdio.h>

#define OVERTIMEPAY 1.5

#define INCOME1 300
#define TAXES1 0.15

#define INCOME2 150
#define TAXES2 0.20

#define TAXES3 0.25

int main(void)
{
	float hourlyWage;
	int playTime;
	float grossPay = 0, taxes = 0, netPay = 0;

	while (1)
	{
		printf("************************************************************\n");
		printf("�ڽ��� �⺻�޿� �ش��ϴ� ��ȣ�� �����Ͻÿ�(�������� 5���� �����Ͻÿ�):\n");
		printf("a) �ð��� $8.75				b) �ð��� $9.33\n");
		printf("c) �ð��� $10.00			d) �ð��� $11.20\n");
		printf("q) ����\n");
		printf("************************************************************\n");

		char n;
		scanf("%c", &n);
		switch (n)
		{
		case 'a':
			hourlyWage = 8.75;
			break;
		case 'b':
			hourlyWage = 9.33;
			break;
		case 'c':
			hourlyWage = 10.00;
			break;
		case 'd':
			hourlyWage = 11.20;
		case 'q': break;
		default:
			printf("�߸� �Է��߽��ϴ�.\n");
			continue;
		}

		if (n == 'q') break;

		printf("������ ���� �뵿�� �ð��� �Է����ּ��� : \n");
		scanf("%d", &playTime);

		grossPay = (playTime > 40 ?
			(playTime - 40) * OVERTIMEPAY
			: playTime) * hourlyWage;

		if (grossPay > INCOME1)
			taxes += INCOME1 * TAXES1;
		else
			taxes += grossPay * TAXES1;

		if (grossPay > INCOME1 + INCOME2)
			taxes += (INCOME1 + INCOME2) * TAXES2;
		else
			taxes += (grossPay - INCOME1) * TAXES2;

		if (grossPay > INCOME1 + INCOME2)
			taxes += (grossPay - INCOME1 - INCOME2) * TAXES3;

		netPay = grossPay - taxes;

		printf("�Ѽҵ� : $%.2f\n", grossPay);
		printf("���� : $%.2f\n", taxes);
		printf("������ : $%.2f\n", netPay);
	}
	printf("����!\n");

	return 0;
}