#include<stdio.h> //c header file

int main(void)
{
	printf("안녕만나서반가워\n"); //no control character

	printf("안녕만나서반가워\a\n"); //\a

	printf("안녕\b\b만나서반가워\n"); //\b

	printf("안녕\t만나서\t반가워\n"); //\t

	printf("안녕\n만나서반가워\n"); //\n

	printf("안녕\v만나서\v반가워\n"); //\v
	 
	printf("안녕\r만나서반가워\n"); //\r

	printf("\"안녕\"만나서반가워\n"); //\"

	printf("\'안녕\'만나서반가워\n"); //\'

	printf("안녕\\만나서\\반가워\n"); //\\

	return 0;
}