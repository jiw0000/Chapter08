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
		printf("자신의 기본급에 해당하는 번호를 선택하시오(끝내려면 5번을 선택하시오):\n");
		printf("a) 시간당 $8.75				b) 시간당 $9.33\n");
		printf("c) 시간당 $10.00			d) 시간당 $11.20\n");
		printf("q) 종료\n");
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
			printf("잘못 입력했습니다.\n");
			continue;
		}

		if (n == 'q') break;

		printf("일주일 동안 노동한 시간을 입력해주세요 : \n");
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

		printf("총소득 : $%.2f\n", grossPay);
		printf("세금 : $%.2f\n", taxes);
		printf("순이익 : $%.2f\n", netPay);
	}
	printf("종료!\n");

	return 0;
}