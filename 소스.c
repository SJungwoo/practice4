#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�޷��� ��ȭ�� ���
int main(void)
{
	int usd, krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�:  ");
	scanf("%d", &usd);
	krw = EXCHANGE_RATE * usd;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);

	return 0;
}

//��� ���
int main(void)
{
	int saving, property; 

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ�:  ");
	scanf("%d", &saving);

	property = saving * 30 *12;
	printf("30�� ���� ��� = %d\n��", property);
	return 0;
}

//�����÷ο� ��� ���
int main(void)
{
	long long int property, saving;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ�:  ");
	scanf("%lld", &saving);

	property = saving * 12 * 30;
	printf("30�� ���� ��� = %lld�� \n", property);

	return 0;
}

