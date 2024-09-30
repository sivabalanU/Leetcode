class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //    map<int,int> mp;
    //    for(int num:nums)
    //     {
    //            mp[num]++;
    //     } 
    //     int ans=0;
    //     for(auto it=mp.begin();it!=mp.end();it++)
    //     {
    //         if(it->second==1)
    //         {
    //             return it->first;
    //         }
    //     }
    //     return -1;  
    int ans=0;
       
    for(int num:nums)
    {
         ans = ans ^ num;
    }  
    return ans;
    }
};