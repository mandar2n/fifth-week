#include<stdio.h> //c header file

int main(void)
{
	char a, b; //두 숫자를 입력받을 두 문자변수 선언
	a = 'a'; //문자변수 초기화
	b = 'a'; //문자변수 초기화

	printf("첫번째 숫자를 입력해주세요: "); //첫번째 숫자를 문자변수로 입력받기
	scanf_s("%c", &a);

	printf("두번째 숫자를 입력해주세요: "); //첫번째 숫자를 문자변수로 입력받기
	scanf_s(" %c", &b);

	int sum, sub, mul; //합, 차. 곱, 나눗셈 변수 선언
	float div;

	float c, d; //float형으로 형변환
	c = a - 48; //숫자를 문자변수로 입력 받았으므로, 두 숫자의 정확한 계산을 위해 아스키코드의 숫자를 실제 숫자로 변환
	d = b - 48;

	sum = c + d; //두 수의 합
	sub = c - d; //두 수의 차
	mul = c * d; //두 수의 곱
	div = c / d; //두 수의 나눗셈

	printf(" 두 수의 합: %d\n", sum);
	printf(" 두 수의 차: %d\n", sub);
	printf(" 두 수의 곱: %d\n", mul);
	printf(" 첫번째 숫자를 두번째 숫자로 나누면 %f이다.\n", div);

	return 0;
}