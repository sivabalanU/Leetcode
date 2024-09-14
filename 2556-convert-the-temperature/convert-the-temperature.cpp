class Solution {
public:
    vector<double> convertTemperature(double cel) {
        vector<double> ans;
        ans.push_back(cel+273.15);
        ans.push_back(cel*1.80+32.00);
        return ans;
    }
};