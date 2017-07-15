
#include <cmath>

int NumberOf1Between1AndN(unsigned int n)
{
    int sum = 0;
    for (int i=1;i<=n;i++)
    {
        sum+=NumberOf1(i);
    }
    return sum;
}
int NumberOf1(umnsigned int n)
{
    int num = 0;
    while(n!=0)
    {
        if (num %1==0)
            num++;
        num = num/10;
    }
    return num;
}
int Solution_2(unsigned int n)
{
    if (n <1)
        return 0;
    int base = 1;
    int num=0;
    int weight = 0;
    int round = n;
    while(round>0)
    {
        weight = n %10;
        round = n/10;
        if(weight > 1)
        {
            num+=round*base+base;
        }
        if (weight == 1)
        {
            num+=round*base+1+ (n%base);
        }
        else
        {
            weight = round*base;
        }
        base *=10;
    }
    return num;

}

iny Solution_3(const char * strN)
{
    if(!strN || *strN  < '0' || *strN > '9' || *str == '\n')
        return 0;
    int first = *strN - '0'
    int length = static_cast<unsigned int >(strlen(strN));
    int num = 0;
    int numFirstDigit = 0;
    if (first >1)
        numFirstDigit += pow(10, length-1);
    else if (first == 1)
        numFirstDigit += atoi(strN+1) + 1;
    int numOtherDigits = first*pow(10,length-2) * (length-1);
    int numRecursive = NumberOf1(strN+1);
    return numFirstDigit + numOtherDigits + numRecursive;



}

