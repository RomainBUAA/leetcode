
#include <exception>
class Solution
{
    public:
        int MinNumverInRotatedArray(int * numbers, int length)
        {
            if(numbers == 0|| length<=0)
                throw new std::exception("valid parameters");
            int start = 0;
            int end = length-1;
            while(end-start>=1)
            {
                int mid = start+(end-start)/2;
                if(numbers[mid] == numbers[start] && numbers[mid] == numbers[end])
                {
                    int cur_index = start;
                    int small =numbers[mid];
                    while(cur_index <= end)
                    {
                        if(numbers[cur_index]<small)
                        {
                            small = numbers[cur_index];
                        }
                        cur_index++;
                    }
                    return small;
                }

                if(numbers[mid]>=numbers[start])
                {
                    start = mid;
                    continue;

                }
                else if(numbers[mid]<=numbers[end])
                {
                    end = mid;
                    continue;
                }
            }
            return numbers[end];
        }
};
