class Solution {
public:
    int countSegments(string s) {
          if(s=="") return 0;
          int count = 0;
          int word_count = 0;
          for(int i = 0;i<s.length();i++)
          {
              if(s[i]==' ')
              {
                  if(word_count != 0)
                  {
                  count++;
                  word_count = 0;
                  }
              }
              else{
                word_count++;
              }
          }   
          if(word_count !=0)
          {
               count++;
          }
          
          return count;
    }
};