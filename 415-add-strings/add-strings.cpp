class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length() - 1;
        int j=num2.length() - 1;
        int carry = 0;
        string ans = "";
        while(i>=0 || j>=0)
        {
            int sum = carry;
            if(i>=0)
            {
                sum += num1[i] - '0';
            }
            if(j>=0)
            {
                sum += num2[j] - '0';
            }

            carry = sum / 10;
            sum = sum % 10;
            ans = char(sum + 48) + ans;
            i--;
            j--;
        }
        if(carry == 1)
        {
            ans = char(carry + 48) + ans;
        }
        return ans;
    }
};