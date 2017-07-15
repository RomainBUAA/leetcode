#include <iostream>
#include <string.h>
class Solution
{
    public:
        void replace_blank(char string[], int length)
        {
            int num_blank = 0;
            int index =0;
            if(string == 0)
                return ;
            while(string[index] !='\0')
            {
                if(string[index]==' ')
                    num_blank++;
                index++;

            }
            int new_length = length + 2*num_blank;
            if(new_length > length)
                return ;
            int cur_index = length-1;
            int new_index = new_length-1;
            while(cur_index > 0)
            {
                if(string[cur_index]!=' ')
                {string[new_index] = string[cur_index];
                    cur_index--;
                    new_index--;
                }
                else
                {
                    new_index -=3;
                    strcpy(string+new_index, "%20");
                    cur_index--;
                    new_index--;
                }
            }

        }
};
