#include<stdio.h>
#include<locale.h>
void main ()
{
	int id_list[100], gd_list[5], t_id=0, i=0, j;
	float pc_list[5] = {10, 11, 22, 5, 4}, sl_list[5] = {0.01, 0.1, 0.02, 0.05, 0.01}, sum, sum_m;
	char *op_list[5]={"���", "������", "�������", "����", "������"};
	setlocale(LC_ALL, "Russian");
	printf("������� ���� ������. \n ������� 0 ��� ������� \n");
	while (1)
	{
		scanf("%d", &t_id);
		if (t_id == 0)
		{
			break;
		}
		if (t_id > 5)
		{
			printf("����� �� ������ \n");
			continue;
		}
		if (t_id > 9999)
		{
			printf("�������� ���� \n");
			continue;
		}
		id_list[i]=t_id;
		t_id--;
		printf("����� %s, ���� �� ��. %f, ������ %d % \n", op_list[t_id], (pc_list[t_id]*(1 - sl_list[t_id])), sl_list[t_id]);
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		gd_list[id_list[i]-1]++;
	}
	for (int i = 0; i < 5; i++)
	{
		if (gd_list[i] == 0)
		{
			continue;
		}
		sum = (gd_list[i] * (1- sl_list[i])) * pc_list[i];
		printf("%c , ���-�� - %d , ��������� %d \n", op_list[i], gd_list[i], sum);
		sum_m += sum;
	}
	printf("� ������ %d", sum_m);
	return;
}