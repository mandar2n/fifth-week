#include<stdio.h> //c header file

int main(void)
{
	char a, b, c, d, e; //���ĺ� �ҹ��ڸ� �Է¹��� 5���� ���ں��� ����

	printf("���ĺ� �ҹ��ڸ� �Է����ּ���: "); 
	scanf_s("%c", &a); //���ĺ� �ҹ��� �Է¹ޱ�
	a = a - 32; //�ҹ��ڸ� �빮�ڷ� ��ȯ

	printf("���ĺ� �ҹ��ڸ� �Է����ּ���: ");
	scanf_s(" %c", &b);
	b = b - 32;

	printf("���ĺ� �ҹ��ڸ� �Է����ּ���: ");
	scanf_s(" %c", &c);
	c = c - 32;

	printf("���ĺ� �ҹ��ڸ� �Է����ּ���: ");
	scanf_s(" %c", &d);
	d = d - 32;

	printf("���ĺ� �ҹ��ڸ� �Է����ּ���: ");
	scanf_s(" %c", &e);
	e = e - 32;

	printf("%c %c %c %c %c", a, b, c, d, e); //�빮�ڷ� ��ȯ�� ���·� ���

	return 0;
}

