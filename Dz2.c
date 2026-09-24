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

