#include<stdio.h>
#include <locale.h>
void main ()
{
	setlocale(LC_ALL, "Russian");
	int b, c=0;
	char f;
	printf("Загадайте число \n");
	b = 500;
	f = '.';
	while (f != '=')
	{
		c++;
		printf("Как ваше число относиться к числу %d \n Введите знак отношения (>, <, =) \n", b);
		scanf("%c", &f);
		switch (f)
		{
			case '>':
			{
				b--;
				break;
			}
			case '<':
			{
				b++;
				break;
			}
			default:
			{
				printf("Неверный ввод \n");
				break;
			}
		}
	}
	printf("Ваше число %d \n Колличество ходов %d \n", b, c);
	return;
}