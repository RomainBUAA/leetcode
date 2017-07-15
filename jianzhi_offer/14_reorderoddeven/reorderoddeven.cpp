void ReorderOddEven(int * pdata, unsighed int length)
{
    if (length <=0 || pdata == 0)
        return ;
    int lindex = 0;
    int rindex = length-1;
    while(lindex < rindex)
    {
        if(lindex<rindex && (pdata[rindex] & 0x1) == 0)
                rindex--;
        if(lindex<rindex && (pdata[lindex] & 0x1)==1)
            lindex++;
        if(lindex < rindex)
        {
            in temp = pdata[rindex];
            pdata[rindex] = pdata[lindex];
            pdata[lindex] = temp;
        }
    }
}
