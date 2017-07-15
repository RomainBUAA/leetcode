int MoreThanHalfNum(int* numbers, int length)
{
    if CheckInvalidArray(numbers, length)
        return 0;
    int index = Partition(numbers, length, 0, length-1);
    int middle = length >> 1;
    int start = 0;
    int end = length -1;
    while(index != middle -1 )
    {
        if (index > middle-1)
        {
            end = index -1 ;
            index = Partition(numbers, length, start, end);
        }
        else
        {
            start = index + 1;
            index = Partition(numbers, length, start, end);
        }

    }
    if CheckMoreThanHalf(numbers, length, numbers[index])
        return 0
    return numbers[index];
}
bool g_bInputInvalid = false;
bool CheckInvalidArray(int *numbers, int length)
{
    g_bInputInvalid = false;
    if(numbers == 0 || length == 0)
        g_bInputInvalid = true;
    return g_bInputInvalid;
}
bool CheckMoreThanHalf(int * numbers, int length, int number)
{
    g_bInputInvalid = false;
    int times = 0;
    for (int i=0;i<length;i++)
    {
        if (numbers[i] == number)
            times++;
    }
    if (times*2 <= length)
        g_bInputInvalid = true;
    return g_bInputInvalid;
}
int MoreThanHalfNum_2(int * numbers, int length)
{
    if CheckInvalidArray(numbers, length)
        return 0;
    int times = 0;
    int lastValue = numbers[0];
    int number = 0;
    for (int i=1;i<length-1;i++)
    {
        if (times == 0)
        {
            times = 1;
            lastValue = numbers[i];
        }
        if (numbers[i] == lastValue)
        {
            times++;
        }
        else
            times--;

    }
    if (CheckMoreThanHalf(numbers, length, lastValue))
        return 0;
    return lastValue;

}
