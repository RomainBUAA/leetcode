#include <stdlib.h>
#include <stdio.h>
#include <string.h>
const int g_MaxNumberLength = 10;
char * g_StrNumber1 = new char[g_MaxNumberLength*2 + 1];
char * g_StrNumber2 = new char[g_MaxNumberLength*2 + 1];

void printMinNumber(int * numbers, int length)
{
    char ** strNumbers = new char * [length];
    for (int i =0;i<length;i++)
    {
        strNumbers[i] = new char[g_MaxNumberLength+1];
        sprintf(strNumbers[i], "%d", numbers[i])
    }
    qsort(strNumbers, length, sizeof(char*), compare);
}
int compare(const char * strNumber1, const char* strNumber2)
{
    strcpy(g_StrNumber1, strNumber2);
    strcat(g_StrNumber1, strNumber2);
    strcpy(g_StrNumber2, strNumber1);
    strcat(g_StrNumber2, strNumber1);
    return strcmp(g_StrNumber1, g_StrNumber2);
}
