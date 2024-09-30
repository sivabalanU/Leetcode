class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums)
        {
             mp[num]++;
        }
        int count = 0;
        for(auto val:mp)
        {
            if(val.second == 2)
            {
                 count = count ^ val.first;
            }
        }
        return count;
    }
};