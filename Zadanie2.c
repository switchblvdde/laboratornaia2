#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, ".UTF8");
	int N = 10, K = 40;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8:00 прошло %d секунд\n",(N-8)*60*60+K*60);
	printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", N / 24.00, K / 60.00);
	return 0;
}