class Solution {
public:
    string frequencySort(string s)
    {
        map<char,int> mp;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push({it->second,it->first});
        }
        while(!pq.empty())
        {
            pair<int,char> p = pq.top();
            pq.pop();
            for(int i=1;i<=p.first;i++)
            {
                res += p.second;
            }
        }
        return res;
    }
};