#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
void main()
{
	int  years;
	setlocale(LC_ALL, "RUS");
	puts("Введите год ");
	scanf("%d", &years);
	if ((years % 4 == 0) && (years % 100 != 0 )|| (years % 400 == 0))
		printf("високосный год");
	else
		printf("год не високосный");
}
