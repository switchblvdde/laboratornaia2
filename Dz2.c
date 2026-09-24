#include <stdio.h>
#include <locale.h>

int main() {

    // Объявление и инициализация переменных
    int n = 100;       // количество пассажиров
    int x = 100;       // стоимость билета второго класса
    int first_class;   // стоимость билета первого класса
    int total;         // общая сумма денег

    setlocale(LC_ALL, ".UTF8");

    // Шаг 1: Определяем количество пассажиров,
    // купивших билеты второго класса
    int second_class_passengers =3 * n / 4;

    // Шаг 2: Определяем количество пассажиров,
    // купивших билеты первого класса
    int first_class_passengers =n / 4;

    // Шаг 3: Стоимость билета первого класса
    // в два раза больше стоимости билета второго класса
    first_class = 2 * x;

    // Шаг4: Рассчитываем сумму от продажи билетов
    // второго класса
    int total_second_class =second_class_passengers * x;

    // Шаг 5: Рассчитываем сумму от продажи билетов
    // первого класса
    int total_first_class =first_class_passengers * first_class;

    // Шаг 6: Рассчитываем общую сумму
    total = total_second_class + total_first_class;

    // Вывод результатов
    printf("РАСЧЕТ ДОХОДА ОТ ПРОДАЖИ БИЛЕТОВ\n");
    printf("=================================\n\n");

    printf("УСЛОВИЯ:\n");
    printf(" Количество пассажиров: %d человек.\n", n);
    printf(" Стоимость билета второго класса: %d фунтов.\n", x);
    printf(" Стоимость билета первого класса: %d фунтов.\n\n", first_class);

    printf("РАСЧЕТ:\n");
    printf(" Пассажиров второго класса: %d чел.\n",
           second_class_passengers);
    printf(" Пассажиров первого класса: %d чел.\n\n",
           first_class_passengers);

    printf(" Доход от билетов второго класса: %d * %d = %d фунтов.\n",
           second_class_passengers, x, total_second_class);

    printf(" Доход от билетов первого класса: %d * %d = %d фунтов.\n",
           first_class_passengers, first_class, total_first_class);

    printf("=================================\n");
    printf("ОБЩАЯ СУММА: %d фунтов.\n", total);

    return 0;
}

