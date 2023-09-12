class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> v(256,-1);
        int p=-1, len=0;

        for(int i=0;i<s.length();i++)
        {
            if(v[s[i]]>p)
              p = v[s[i]];
            v[s[i]] = i;
            len = max(len, i-p);
        }

        return len;

        // map<char , int> mp;
        // int c=0, c1=0, x=0;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(mp.find(s[i]) != mp.end())
        //     {
        //        c = mp[s[i]] < x ? c+1 : i - mp[s[i]];
        //        if(x<mp[s[i]])
        //          x = mp[s[i]];
        //        mp[s[i]] = i;
        //     }
        //     else
        //     {
        //         mp[s[i]] = i;
        //         c++;
        //     }

        //     if(c1<c)
        //       c1=c;
        // }
        
        // return c1;
    }
};