#include<stdio.h>
#include <locale.h>
void main ()
{
	setlocale(LC_ALL, "Russian");
	int b, c=0;
	char f;
	printf("��������� ����� \n");
	b = 500;
	f = '.';
	while (f != '=')
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
	printf("���� ����� %d \n ����������� ����� %d \n", b, c);
	return;
}