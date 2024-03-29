class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        int i;
        if(s.length()!=t.length())
          return false;
        for(i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(i=0;i<t.length();i++)
        {
            mp[t[i]]--;
        }

        for(i=0;i<s.length();i++)
        {
            if(mp[s[i]]!=0)
               return false;
        }
        return true;
    }
};