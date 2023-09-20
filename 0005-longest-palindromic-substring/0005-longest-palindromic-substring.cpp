class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n==0)
          return "";

         // dp[i][j] will be 'true' if the string from index i to j is a palindrome.
        bool dp[n][n];

        //Initialize with false
        memset(dp, 0, sizeof(dp));

        for(int i=0;i<n;i++)
           dp[i][i] = true;

        string ans="";
        ans = ans+s[0];

        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    if(j-i == 1 || dp[i+1][j-1])
                    {
                        dp[i][j]=true;

                        if(ans.length()<j-i+1)
                            ans = s.substr(i,j-i+1);
                    }
                }
            }
        }

        return ans;
    }
};