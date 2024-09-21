class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
          int x= mat.size();
          int y= mat[0].size();
          if((x*y)!=(r*c))
          {
                 return mat;
          }
          vector<vector<int>> result;
          vector<int> vec;
          for(int i=0;i<x;i++)
          {
                 for(int j=0;j<y;j++)
                 {
                     vec.push_back(mat[i][j]);
                     if(vec.size() == c)
                     {
                        result.push_back(vec);
                        vec={};
                     }
                 }
          }
          return result;
    }
};