
#include <string.h>
void print_max_ndigit_recursively(char * number, int length, int index);
void print_number(char * number);
void print_max_ndigit(int n)
{
    char * number = new char[n+1];
    number[n+1] = '\0';
    memset(number, 0 ,n);
    int length = strlen(number);
    print_max_ndigit_recursively(number, length, 0);
    delete[] number;

}
void print_max_ndigit_recursively(char * number,int length,  int index)
{
    if(index == length-1)
    {
        print_number(number);
        return;
    }
    for(int i=0;i<10;i++)
    {
        number[index] = i+'0';
        print_max_ndigit_recursively(number, length, index+1);
    }

}
void print_number(char * number)
{
}
