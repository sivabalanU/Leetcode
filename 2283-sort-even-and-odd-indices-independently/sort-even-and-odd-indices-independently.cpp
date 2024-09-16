class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {  
         for(int i=0;i<nums.size();i++)
         {
            for(int j=i;j<nums.size();j+=2)
            {
                 if(i%2 ==0)
                 {
                     if(nums[i]>=nums[j])
                     {
                         int temp = nums[i];
                         nums[i] = nums[j];
                         nums[j] = temp;
                     }

                 }
                 else{
                     if(nums[i]<=nums[j])
                     {
                         int temp = nums[i];
                         nums[i] = nums[j];
                         nums[j] = temp;
                     }
                 }
            }
         }
         return nums;
    }
};