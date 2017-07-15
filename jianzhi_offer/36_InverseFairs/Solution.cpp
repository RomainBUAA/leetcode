

int InversePairs(int* data, int length)
{
    if (data==0 || length<=0)
        return 0;
    int *copy = new int[length];
    for(int i=0;i<length;i++)
    {
        copy[i] = data[i];
    }
    return InversePairsCore(int* data, int* copy, 0, length-1);
}

int InversePairsCore(int*data, int* copy, int start, int end)
{
    if(start == end)
    {
        copy[start] = data[start];
        return 0;
    }
    int half = (start+end)/2;
    left = InversePairsCore(copy, data,start, half-1);
    right = InversePairsCore(copy, data, half, end);
    int i=half-1;
    int j=end;
    int count = left+right;
    int index = end;
    while(i>=start && j>= half)
    {
        if(data[i] > data[j])
        {
            copy[index--] = data[i--];
            count += j-half+1;
        }
        else
        {
            copy[index--] = data[j--];
        }
    }
    while(j>=half)
    {
        copy[index--] = data[j--];
    }
    while(i>=start)
    {
        copy[index--] = data[i--];
    }
    return count;
}


