class Solution {
public:
    bool canConstruct(string ran, string mag) {
        int arr[26];
        for(char c:mag)
        {
            arr[c-'a']++;
        }
        for(char c:ran)
        {
            if(arr[c-'a']>0)
            {
                arr[c-'a']--;
            }
            else{
               return false;
            }
        }
         return true;
    }
};