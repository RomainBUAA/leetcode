
char FirstNotRepeatingChar(char* pString)
{
    if(pString == 0)
    {
        return '\0';
    }
    const int tableSize = 256;
    int hashTable[tableSize];
    for(int i=0;i<tableSize;i++)
    {
        hashTable[i]=0;
    }
    char * curChar = pString;
    while(*curChar!='\0')
    {
        hashTable[*(curChar++)] ++;
    }
    curChar = pString;
    while(*curChar!='\0')
    {
        if (hashTable[*curChar] == 1)
            return *curChar;
    }
    return '\0';
}
