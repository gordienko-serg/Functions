#include"Functions.h"

void FillRand(double Arr[], const int n)
{
	//Заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}