class Solution {
public:
    vector<int> finalPrices(vector<int>& price) {
        int n = price.size();
        for(int i=0;i<n;i++)
        {
             for(int j=i+1;j<n;j++)
             {
                 if(price[i]>= price[j])
                 {
                    price[i] = (price[i]  - price[j]);
                    break;
                 }
             }
        }
        return price;
    }
};