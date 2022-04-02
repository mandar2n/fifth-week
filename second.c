#include<stdio.h> //c header file

int main(void)
{
	//char 형의 오버플로우
	char a;
	a = 128;
	printf("%d\n", a);

	//char 형의 언더플로우
	char b;
	b = -130;
	printf("%d", b);

	return 0;
}