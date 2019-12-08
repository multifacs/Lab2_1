#ifndef _HEADER1_H_
#define _HEADER1_H_
#include <stdio.h>

void CreateArr(int size, double **m);
void Gen(int size, double* m, double mina, double maxa);
void Print(int size, double* m);
void PrintFile(FILE* f, int size, double* m);

#endif
