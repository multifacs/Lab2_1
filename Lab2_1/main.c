#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int main(int argc, char* argv[])
{
	int n = 0, i = 0;
	double maxa = 0, mina = 0;
	double* arr;
	FILE* f;

	srand(time(NULL));

	if (argc < 5)
	{
		printf("Error\n");
		return 1;
	}

	n = atoi(argv[1]);
	mina = atoi(argv[2]);
	maxa = atoi(argv[3]);

	CreateArr(n, &arr);
	Gen(n, arr, mina, maxa);

	f = fopen(argv[4], "w");
	PrintFile(f, n, arr);
	fclose(f);

	free(arr);
	return 0;
}