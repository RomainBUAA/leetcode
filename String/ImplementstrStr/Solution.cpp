class Solution
{
    public:
        int strStr(string haystack, string needle)
        {
            int m = haystack.size();
            int n = needle.size();
            if(m==0&&n==0)
                return 0;
            if(n==0)
                return 0;
            if(m==0)
                return -1;
            int j;
            for(int i=0;i<=m-n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(haystack[i+j] != needle[j])
                    {
                        break;
                    }
                }
                if(j==n)
                    return i;
            }
            return -1;
        }

};
