#include<stdio.h> //c header file

int main(void)
{
	char a, b, c, d, e; //알파벳 소문자를 입력받을 5개의 문자변수 선언

	printf("알파벳 소문자를 입력해주세요: "); 
	scanf_s("%c", &a); //알파벳 소문자 입력받기
	a = a - 32; //소문자를 대문자로 변환

	printf("알파벳 소문자를 입력해주세요: ");
	scanf_s(" %c", &b);
	b = b - 32;

	printf("알파벳 소문자를 입력해주세요: ");
	scanf_s(" %c", &c);
	c = c - 32;

	printf("알파벳 소문자를 입력해주세요: ");
	scanf_s(" %c", &d);
	d = d - 32;

	printf("알파벳 소문자를 입력해주세요: ");
	scanf_s(" %c", &e);
	e = e - 32;

	printf("%c %c %c %c %c", a, b, c, d, e); //대문자로 변환된 형태로 출력

	return 0;
}

