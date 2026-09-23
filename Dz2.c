#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,".UTF8");
	int n = 100;
	int x = 100;
	printf("Сумма = %d фунтов", 5 * n * x / 4);
	return 0;
}