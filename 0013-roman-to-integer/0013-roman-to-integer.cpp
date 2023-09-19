class Solution {
public:
    int romanToInt(string s) {
        int p=0,ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            int x;
            if(s[i]=='I')
              x=1;
            else if(s[i]=='V')
              x=5;
            else if(s[i]=='X')
              x=10;
            else if(s[i]=='L')
              x=50;
            else if(s[i]=='C')
              x=100;
            else if(s[i]=='D')
              x=500;
            else if(s[i]=='M')
              x=1000;

            if(x>=p)
              ans+=x;
            else 
              ans-=x;
            p=x;
        }
        return ans;
    }
};