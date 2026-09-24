#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,".UTF8");
	int n = 100;//количество пассажиров
	int x = 100;//стоимость билета второго класса
	int total =  5 * n * x / 4// вычисление общей суммы денег от продажи билетов:
	printf("Сумма = %d фунтов", total);
	return 0;
}
