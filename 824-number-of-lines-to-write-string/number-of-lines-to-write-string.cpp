class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum = 0;
        int Line_count = 0;
        int flag  = 1;
        for(int i=0;i<s.length();i++)
        {
            sum += widths[s[i] - 'a'];
            if(sum == 100)
            {
                flag = sum;
                Line_count++;
                sum = 0;
            }
            else if(sum > 100)
            {
                Line_count++;
                sum = widths[s[i] -'a'];
            }
        }
        if(sum !=0)
        {
            Line_count++;
            return {Line_count,sum};
        }
    
        return {Line_count,flag};
    }
};