class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       Flip(image);
       return image;  
    }
    void Flip(vector<vector<int>>& image)
    {
        for(int i=0;i<image.size();i++)
        {
            int st = 0;
            int end = image[i].size() - 1;
            while(st <= end)
            {
                int temp = image[i][end];
                if(image[i][st] == 0)
                {
                    image[i][end] = 1;
                }
                else{
                    image[i][end] = 0;
                }

                if(temp == 0)
                {
                    image[i][st] = 1;
                }
                else{
                    image[i][st] = 0;
                }
                st++;
                end--;
            }
        }
    }
};