#include<stdio.h> //c header file

int main(void)
{
	printf("�ȳ縸�����ݰ���\n"); //no control character

	printf("�ȳ縸�����ݰ���\a\n"); //\a

	printf("�ȳ�\b\b�������ݰ���\n"); //\b

	printf("�ȳ�\t������\t�ݰ���\n"); //\t

	printf("�ȳ�\n�������ݰ���\n"); //\n

	printf("�ȳ�\v������\v�ݰ���\n"); //\v
	 
	printf("�ȳ�\r�������ݰ���\n"); //\r

	printf("\"�ȳ�\"�������ݰ���\n"); //\"

	printf("\'�ȳ�\'�������ݰ���\n"); //\'

	printf("�ȳ�\\������\\�ݰ���\n"); //\\

	return 0;
}