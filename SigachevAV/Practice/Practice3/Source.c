#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main ()
{
	int a,b,c,d, b2;
	char f;
	c = 0;
	setlocale(LC_ALL, "Russian");
	srand((unsigned int)time(0)); 
	printf("������� �������� ����� ����. \n 1 - ����� ���������� \n 2 - ����� ���������� \n");
	scanf("%d", &a);
	if ((a!=1) && (a!=2))
	{
		printf("�������� ����");
		return;
	}
	if (a==1)
	{
		b = rand() % 1001; 
		while (1)
		{
			printf("������� ����� \n"); 
			scanf("%d", &d);
			c++;
			if (b == d)
			{
				break;
			}
			if (d > b)
			{
				printf("����� ������ ���������� \n");
			}
			if (d < b)
			{
				printf("����� ������ ����������� \n");
			}
		}
		printf("�� �������� �����. \n ����������� ������� = %d", c);
		return;
	}
	if (a==2)
	{
		printf("��������� ����� \n");
		b = 500;
		f = '.';
		while(f != '=')
		{
			c++;
			printf("��� ���� ����� ���������� � ����� %d \n ������� ���� ��������� (>, <, =) \n", b);
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
					printf("�������� ���� \n");
					break;
				}
			}
		}
		printf("���� ����� %d \n ����������� ����� %d \n", b, c/2);
		return;
	}
}