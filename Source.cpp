#include <stdio.h>
#include <math.h>
#include <locale.h>

bool isInArea(double x, double y)
{
	if (x <= 1 && y <= 1 && (x*x + y*y >= 1))
		return 1;
	else
		return 0;
}

double f(double x)
{
	if (x <= 3)
		return x*x - 3 * x + 9;
	else
		return 1 / (x*x*x + 6);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	int a;
	do
	{
		printf("1) Задание 1\n2) Задание 2\n0) Выход\nnum:");
		scanf_s("%d", &a);
		printf("\n");
		switch (a)
		{
			case 1:
				printf("x = ");
				scanf_s("%lf", &x);
				printf("y = ");
				scanf_s("%lf", &y);
				printf("result = %d\n\n", isInArea(x, y));
				break;
			case 2:
				printf("x = ");
				scanf_s("%lf", &x);
				printf("f(x) = %lf\n\n", f(x));
				break;
		}
	} while (a != 0);
	return 0;
}