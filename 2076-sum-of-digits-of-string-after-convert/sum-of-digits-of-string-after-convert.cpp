class Solution {
public:
    int getLucky(string s, int k) {
        string ans ="";
        for(char c:s)
        {
             ans += to_string((c - 'a') + 1);
        }
        while(k!=0)
        {
            int sum =0;
            for(char c:ans)
            {
                sum += (c-'0');
            }
            cout<<sum<<endl;
            ans = to_string(sum);
            k--;
            if(k==0) return sum;
        }
        return 0;
    }
};