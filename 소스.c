#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//달러를 원화로 계산
int main(void)
{
	int usd, krw;

	printf("달러화 금액을 입력하시오:  ");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd;
	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);

	return 0;
}

//재산 계산
int main(void)
{
	int saving, property; 

	printf("매달 저축 금액을 입력하시오:  ");
	scanf("%d", &saving);

	property = saving * 30 *12;
	printf("30년 후의 재산 = %d\n원", property);
	return 0;
}

//오버플로우 재산 계산
int main(void)
{
	long long int property, saving;

	printf("매달 저축 금액을 입력하시오:  ");
	scanf("%lld", &saving);

	property = saving * 12 * 30;
	printf("30년 후의 재산 = %lld원 \n", property);

	return 0;
}

