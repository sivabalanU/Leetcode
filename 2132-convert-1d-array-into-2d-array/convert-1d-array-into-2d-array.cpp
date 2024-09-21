class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& ori, int m, int n) {
         int num = ori.size();
         if(num != (m*n))
         {
             return {};
         }
         vector<vector<int>> result;
         vector<int> vec;
         for(int i=0;i<num;i++)
         {
              vec.push_back(ori[i]);
              if(vec.size() == n)
              {
                   result.push_back(vec);
                   vec = {};
              }    
         }
         return result;
    }
};