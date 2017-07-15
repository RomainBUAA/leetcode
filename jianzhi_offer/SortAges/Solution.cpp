class Solution
{
    public:
        void SortAges(int ages[], int length)
        {
            if(ages == 0 || length <=0)
                return ;
            int max_ages = 99;
            int num_ages[max_ages+1];
            for(int i=0;i<=99;i++)
            {
                num_ages[i] = 0;
            }
            for(int i=0;i<length;i++)
            {
                int age = ages[i];
                num_ages[age]++;
            }
            int index=0;
            for(int i=0;i<=max_ages;i++)
            {
                for(int j=0;j<num_ages[i];i++)
                {
                    ages[index]=i;
                    index++;
                }
            }

        }
};
