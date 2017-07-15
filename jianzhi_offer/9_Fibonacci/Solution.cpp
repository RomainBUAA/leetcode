class Solution
{
    public:
        long long Fibonacci(unsigned n)
        {
            int arr[2] ={ 0,1};
            if(n<2)
            {
                return arr[n];
            }
            int first_num=1;
            int second_num=0;
            int n_num;
            for(int i=2;i<=n;i++)
            {
                n_num = first_num + second_num;
                second_num = first_num;
                first_num = n_num;


            }
            return n_num;
        }
};
