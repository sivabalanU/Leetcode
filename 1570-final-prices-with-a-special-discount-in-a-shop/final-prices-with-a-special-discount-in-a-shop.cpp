class Solution {
public:
    vector<int> finalPrices(vector<int>& price) {
        int n = price.size();
        stack<int> st;
        vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()>price[i])
            {
                   st.pop();
            }
            if(!st.empty())
            {
                 ans [i] = (price[i] - st.top());
            }
            else{
                ans[i] = price[i];
            }
            st.push(price[i]);
        }
        return ans;
    }
};