class Solution
{
    public:
        bool find(int * matrix, int rows, int columns, int number)
        {
            if(matrix == 0)
                return false;
            int cur_column = columns-1;
            int cur_row = 0;
            while(cur_row< rows && cur_column >=0)
            {
                if(matrix[cur_row*columns+cur_column] == number)
                {
                    return true;
                }
                else if(matrix[cur_row*columns+ cur_column]>number)
                {
                    cur_row++;
                }
                else if(matrix[cur_row*columns+cur_column]< number)
                {
                    cur_column--;
                }
            }
            return false;
        }
};
