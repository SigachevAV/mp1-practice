#include <stdio.h>
#include <math.h>
#include <locale.h>
void main()
{
	float Xa = 0, Xb = 0, Ya = 0, Yb = 0, Ra = 0, Rb = 0, X, Y, A;
	setlocale(LC_ALL, "Rus");
	printf("input 1: ");
	scanf("%d %d %d", &Xa, &Ya, &Ra);
	printf("\n");
	printf("input 2: ");
	scanf("%d %d %d", &Xb, &Yb, &Rb);
	if (Ra <= 0 || Rb <= 0) /*������ �� ������*/
	{
		printf("������� ����");
		return;
	}
	if ((Xa == Xb) && (Ya == Yb)) /*���� ����� ����������*/
	{
		if (Ra == Rb)
		{
			printf("����� ���������");
			return;
		}
		if (Ra > Rb)
		{
			printf("���� 2 ������ ����� 1");
			return;
		}
		else
		{
			printf("���� 1 ������ ����� 2");
			return;
		}
	}
	X = fabs((Xa - Xb)*(Xa - Xb)); /*��������������� �������*/
	Y = fabs((Ya - Ya)*(Ya - Ya));
	if ((X + Y) < (Ra + Rb)*(Ra + Rb)) /*����� ����� �� � ����� �����*/
	{
		printf("����� ������������ � 2 ������");
		return;
	}
	else if ((X + Y) == (Ra + Rb)*(Ra + Rb))
	{
		printf("����� ������������� � 1 �����");
		return;
	}
	A = sqrt(X + Y);
	if (A < Ra)
	{
		if ((A + Rb) < Ra)
		{
			printf("���� 2 ��������� ������ ����� 1");
			return;
		}
		if ((A + Rb) == Ra)
		{
			printf("���� 2 ��������� ������ ����� 1 � ����� 1 ����� �������");
			return;
		}
	}
	if (A < Rb)
	{
		if ((A + Ra) < Rb)
		{
			printf("���� 1 ��������� ������ ����� 2");
			return;
		}
		if ((A + Ra) < Rb)
		{
			printf("���� 1 ��������� ������ ����� 2 � ����� 1 ����� �������");
			return;
		}
	}
}