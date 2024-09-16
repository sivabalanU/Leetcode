class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        if(matrix.size()==1 || matrix[0].size()==1)
        {
            return true;
        }
        int prev = matrix[0][0];
        for(int i=0;i<matrix.size() && i<matrix[0].size();i++)
        {
            if(prev != matrix[i][i])
            {
                return false;
            }
        }
        int col_count = 1;
        for(int k=1;k<matrix[0].size() ;k++)
        {      
               int i = 0;
               int j=col_count;
               prev = matrix[i][j];
               while(i<matrix.size() && j<matrix[0].size())
               {
                    if(prev != matrix[i][j])
                    {
                        return false;
                    }
                    i++;
                    j++;
               }  
               col_count++;
        }
        int row_count = 1;
        for(int k=1;k<matrix.size();k++)
        {
            int i=0;
            int j=row_count;
            prev = matrix[j][i];
            while(i<matrix[0].size() &&j<matrix.size())
            {
                if(prev != matrix[j][i])
                {
                    return false;
                }
                i++;
                j++;
            }
            cout<<endl;
            row_count++;
        }
        return true;
    }
    
};