class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int i,j;
        bool x = false;
        string p = "";
        for(i=0;i<s[0].length();i++)
        {
           for(j=0;j<s.size();j++)
           {
               if(s[j][i] == s[0][i])
                  continue;
                else
                  x=true;
           }
           if(!x)
             p=p+s[0][i];
            else
              break;
        }
        return p;
    }
};