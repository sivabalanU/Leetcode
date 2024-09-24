class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> result;
        int row = img.size();
        int col =  img[0].size();
        for(int i=0;i<row;i++)
        { 
            vector<int> vec;
            for(int j=0;j<col;j++)
            {
                  int sum =  img[i][j];
                  int count = 1;
                  if(i != 0)
                  {
                      sum += img[i-1][j];
                      count++;
                  }
                  if(j != 0)
                  {
                       sum += img[i][j-1];
                      count++;
                  }
                  if(i != row -1)
                  {
                       sum += img[i+1][j];
                      count++;
                  }
                  if(j != col-1)
                  {
                       sum += img[i][j+1];
                      count++;
                  }
                  if(i !=0 && j != 0)
                  {
                      sum += img[i-1][j-1];
                      count++;
                  }
                  if(i != row-1 && j != 0)
                  {
                      sum += img[i+1][j-1];
                      count++;
                  }
                  if( i !=0 && j != col -1)
                  {
                      sum += img[i-1][j+1];
                      count++;
                  }
                  if(i != row-1 && j != col -1)
                  {
                       sum += img[i+1][j+1];
                      count++;
                  }
                  vec.push_back(sum / count);
            }
            result.push_back(vec);
        }

        return result;
    }
};