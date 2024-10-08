class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
        for(int i=grid.size() - 1 ;i>=0;i--)
        {
             for(int j=grid[i].size() - 1;j>=0;j--)
             {
                if(grid[i][j]<0)
                {
                    count++;
                }
                else{
                    break;
                }
             }
             if(i!=0 && grid[i - 1][grid[i].size() - 1] > -1)
             {
                break;
             }
        }
        return count;
    }
};