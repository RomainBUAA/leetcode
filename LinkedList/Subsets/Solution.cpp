class Solution
{
    public:
        vector<vector<int>> subsets(vector<int> &S)
        {
            sort(S.begin(),  S.end());
            vector<vector<int>> result;
            vector<int> path;
            int step = 0;
            subsets(S, path, step, result);
            return result;
        }
    private:
        static void subsets(const vector<int> &S, vector<int> & path, int step, vector<vector<int>> & result )
        {
            if(step ==  S.size())
            {
                result.push_back(path);
                return ;

            }
            subsets(S, path, step + 1, result);
            path.push_back(S[step]);
            subsets(S, path, step + 1, result);
            path.pop_back();
        }

};

