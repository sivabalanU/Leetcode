class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            int min_ele = INT_MAX;
            int min_index = -1;
            for(int j=0;j<matrix[i].size();j++)
            {
                  if(min_ele > matrix[i][j])
                  {
                    min_ele = matrix[i][j];
                    min_index = j;
                  }
            }
            int max_ele = -1;
            for(int j=0;j<matrix.size();j++)
            {
                if(max_ele<matrix[j][min_index])
                {
                    max_ele = matrix[j][min_index];
                }
            }
            if(min_ele == max_ele)
            {
                return {min_ele};
            }
        }
        return {};
    }
};