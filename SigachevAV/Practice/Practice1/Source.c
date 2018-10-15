#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float w, h, d, ds, dp, dw, m;	/* Объявляем переменные и задаём плотность материаллов*/
	int p;
	ds = 725;
	dp = 900;
	dw = 500;
	printf("Введите высоту, ширину и глубину шкафа. /n");	/*Ввод данных*/
	scanf("%f %f %f", &h, &w, &d);
	if ((w<80) || (w>120) || (h<180) || (h>220) || (d<50) || (d>90))	/*Защита от дурака*/
	{
		printf("Ошибка");
		return;
	}
	p = (int)h / 40;	/*Расчёты*/
	w = w / 100;
	h = h / 100;
	d = d / 100;
	m = (w*h*0.005)*dp;
	m = m + ((h*w*0.01)*dw);
	m = m + (((w*d*p) + (w*d * 2) + (h*d * 2))*0.015*ds);
	printf("%f масса шкафа в кг", m);	/*Вывод данных*/
	return;
}