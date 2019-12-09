#ifndef _HEADER1_H_
#define _HEADER1_H_
#include <stdio.h>

void CreateArr(int size, long int** m);
void Gen(int size, long int* m, long int maxa, long int mina);
void Print(int size, long int* m);
void PrintFile(FILE* f, int size, long int* m);

#endif
