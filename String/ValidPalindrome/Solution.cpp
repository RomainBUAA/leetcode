class Solution
{
    public:
        bool isPalindrome(string s)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            string::iterator left = s.begin();
            string::iterator right = s.end();
            while(left < right)
            {
                if(!isalnum(*left))
                {
                    left++;
                }
                else if(!isalnum(*right))
                {
                    right--;
                }
                else if(*left!= *right)
                {
                    return false;
                }
                else{
                    right--;
                    left++;
                }
            }
            return true;
        }

};
