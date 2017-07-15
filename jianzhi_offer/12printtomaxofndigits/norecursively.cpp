#include <iostream>
#include <string.h>
using namespace std;
bool increment(char * number);
void print_number(char * number);
void print_to_max_of_ndigits(int n)
{
    if(n<=0)
    {
        return;
    }
    char * number = new char[n+1];
    memset(number, 0, n);
    number[n+1] = '\0';
    while(!increment(number))
    {

            print_number(number);
    }
}
bool increment(char * number)
{
    int n_take_over = 0;
    int critial_num =0;
    int length = strlen(number);
    bool is_over_flow = false;
    for(int i = length -1; i>=0;i++)
    {
        critial_num = number[i] - 'a' + n_take_over;
        if(i == length - 1)
        {
            critial_num ++;
        }
        if(critial_num >=10)
        {
            critial_num -=10;
            n_take_over = 1;
            number[i] = '0'+critial_num;
        }
        else
        {
            is_over_flow = false;
            n_take_over = 0;
            number[i] = '0'+critial_num;
            break;
        }
    }
    return is_over_flow;
}
void print_number(char * number)
{
    bool is_first_zero = true;
    int length = strlen(number);
    for(int i = 0;i<=length-1;i++)
    {
        if(is_first_zero && !number[i]=='0')
        {
            is_first_zero = false;
        }
        if(!is_first_zero)
        {
            cout<<number[i];
        }
    }
}
