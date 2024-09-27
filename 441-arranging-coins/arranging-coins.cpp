class Solution {
public:
    int arrangeCoins(int n) {
         
         int count =0;
         int coin = n;
         for(int i=1;i<=n;i++)
         {
             if(coin >= i)
             {
                  count++;
                  coin -= i;
             }
             else{
                break;
             }
         }
          return count;
    }
};