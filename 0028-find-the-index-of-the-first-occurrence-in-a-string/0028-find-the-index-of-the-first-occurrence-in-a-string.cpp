class Solution {
public:
    int strStr(string s, string p) {
        if(p=="")
          return -1;

        int i=0,j=0;
        while(i<s.length() && j<p.length())
        {
            if(s[i]==p[j])
            {
                i++;
                j++;
                if(j==p.length())
                  return i-j;
            }
            else
            {
                i = i-j+1;
                j=0;
            }
        }

        return -1;
    }
};