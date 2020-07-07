#include<stdio.h>
#include<time.h>
#include<Windows.h>
#pragma warning(disable: 4996)
int main()
{
	time_t timer;
	do {
		time(&timer);
		char* tm = asctime(localtime(&timer));
		system("cls");
		printf("현재시간: %s\n",tm);
	} while (1);
	return 0;
}