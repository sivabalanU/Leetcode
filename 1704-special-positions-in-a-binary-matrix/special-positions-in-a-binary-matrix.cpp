class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0; 
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j] == 1)
                {
                      cout<<"Hi";
                      if(Find(mat,i,j))
                      {
                            count++;
                            cout<<"Heloo";
                      }
                }
            }
        }
        return count;
    }
    bool Find(vector<vector<int>> mat,int m,int n)
    {
         for(int i=0;i<mat[0].size();i++)
         {
               if(i != n && mat[m][i] ==1)
               {
                    return false;
               }
         }
         for(int i=0;i<mat.size();i++)
         {
               if(i !=m && mat[i][n]==1)
               {
                    return false;
               }
         }
         return true;
    }
};