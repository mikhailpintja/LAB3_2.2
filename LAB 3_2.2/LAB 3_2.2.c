// Lab3_2(part2).c: Визначення дня тижня за порядковим номером.//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>

int main()
{
	unsigned int n;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть число вiд 1 до 7 для визначення дня тижня n=");
	scanf("%d", &n);

	switch (n)
	{
	case 1: printf("\n %d день тижня - Понедiлок", n); break;
	case 2: printf("\n %d день тижня - Вiвторок", n); break;
	case 3: printf("\n %d день тижня - Середа", n); break;
	case 4: printf("\n %d день тижня - Четвер", n); break;
	case 5: printf("\n %d день тижня - П'ятниця", n); break;
	case 6: printf("\n %d день тижня - Субота", n); break;
	case 7: printf("\n %d день тижня - Недiля", n); break;
	default: printf("\n Введено некоректне число!");
	}
	int getch(); getch();
	return 0;
}
