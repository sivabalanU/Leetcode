class Solution {
public:
    bool canConstruct(string ran, string mag) {
         sort(ran.begin(),ran.end());
         sort(mag.begin(),mag.end());
         int i=0;
         int j=0;
         int count =0;
         while(i< ran.length() && j < mag.length())
         {
            if(ran[i]==mag[j])
            {
                count++;
                // cout<<ran[i]<<" "<<mag[j]<<endl;
                i++;
                j++;
            }
            else if(ran[i] > mag[j])
            {
                j++;
            } 
            else if(ran[i] < mag[j])
            {
                i++;
            } 
         }
   
         return count==ran.length();
    }
};