#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main () 
{
	setlocale(LC_ALL, "Russian");
	srand((unsigned int)time(0));
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int b[10];
	int n, t, r, i, i2, B = 0, K = 0;
	long int N;
	printf ("Введите разрядность /n");
	scanf ("%d", &n);
	for (i = 0; i < 10; i++)
	{
		r = rand() % 10;
		t = a[i];
		a[r] = a[i];
		a[r] = t;
	}
	if (a[n-1] == 0)
	{
		while (r==0)
		{
			r = rand() % 10;
		}
		t = a[r];
		a[r] = a[n-1];
		a[n-1] = t;
	}
	while (B != K)
	{
		printf("Введите число /n");
		scanf("%d", &N);
		if (N > 10 * n)
		{
			printf("Неверый ввод /n");
			continue;
		}
		for (i = 0; i < n - 1; i++)
		{
			b[i] = N % 10;
		}
		for ( i = 0; i < n-1; i++)
		{
			if (b[i] == a[i])
			{
				B++;
			}
			for ( i2 = 0; i2 < n-1; i2++)
			{
				if (b[i] == a[i2])
				{
					K++;
				}
			}
		}
		printf("Быков %d /n Коров %d /n", B, K - B);
	}
	printf("Вы победили");
	return;
}