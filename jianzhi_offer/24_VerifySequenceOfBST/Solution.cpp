#include "../common.h"

bool verifySequenceOfBST(int sequence[], int length)
{
    if (sequence == 0 || length <= 0)
        return false;
    int root = sequence[length-1];
    int i = 0;
    for (;i < length-1;i++)
    {
        if (sequence[i] > root)
        {
            break;
        }
    }
    int j = i;
    for (;j < length -1;j++)
    {
        if (sequence[j] < root)
            return false;
    }
    bool left = true;
    if (i > 0)
        left = verifySequenceOfBST(sequence, i);
    bool right = true;
    if (j < length-1)
    {
        right = verifySequenceOfBST(sequence+i, length-i-1);
    }
    return (left && right);
}
