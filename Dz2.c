#include <stdio.h>
#include <locale.h>

int main() {
    // Объявление и инициализация переменных
    int n = 100; // количество пассажиров
    int x = 100; // стоимость билета второго класса
    setlocale(LC_ALL, ".UTF8");
    int total = 5*n*x/4;//вычисление общей суммы от продажи билетов
    printf("Сумма = %d фунтов",total);
    return 0;
}

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus"); 
	int num;
	int numm;
	puts("введите число");	
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	printf("введите число");
	scanf_s("%d", &numm);
	printf("Сумма: %d + %d = %d\n", numm, num, numm + num);
	printf("Разность: %d - %d = %d\n", num, numm, num - numm);
	printf("Произведение: %d * %d = %d\n", num, numm, num * numm);
	printf("Частное: %d/%d=%d\n",numm,num,numm/num);
	printf("Остаток: %d%%%d=%d\n", numm, num, numm % num);
	return 0;
}
