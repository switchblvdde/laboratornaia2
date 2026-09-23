#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int n = 3, L = 333;
	printf("Дано:\n\t%5d\n\t%5d\n\t-----\nОтвет:\n\t000.%03d",n,L,(n*1000)/L);
	return 0; 
}
