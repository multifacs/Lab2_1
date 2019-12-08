#include "header1.h"
#include <stdlib.h>
#include <time.h>

#pragma warning(disable : 4996)

void CreateArr(int size, double** m)
{
	if (size > 0)
		*m = (double*)malloc(size * sizeof(double));
}

void Gen(int size, double* m, double mina, double maxa)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		m[i] = ((double)rand() / (double)RAND_MAX) * (maxa - mina) + mina;
	}
}

void Print(int size, double *m)
{
	int i = 0;
	printf("N = %d\n", size);
	for (i = 0; i < size; i++)
		printf("m[%d] = %lf\n", i, m[i]);
}

void PrintFile(FILE* f, int size, double *m)
{
	int i = 0;
	fprintf(f, "%d\n", size);
	for (i = 0; i < size; i++)
		fprintf(f, "m[%d] = %lf\n", i, m[i]);
}
