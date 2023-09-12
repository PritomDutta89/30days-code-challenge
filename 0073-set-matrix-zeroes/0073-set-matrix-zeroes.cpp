class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int c=false;
        int row = m.size();
        int col = m[0].size();
        int i,j;
        for(i=0;i<row;i++)
        {
          if(m[i][0]==0)
            c=true;
          for(j=1;j<col;j++)
          {
              if(m[i][j]==0)
              {
                  m[i][0]= m[0][j]=0;
              }
          }
        }
        for(i=row-1;i>=0;i--)
        {
            for(j=col-1;j>=1;j--)
            {
                if(m[i][0] == 0 || m[0][j]==0)
                  m[i][j] = 0;
            }
            if(c)
              m[i][0]=0;
        }
    }

    // TC - O(M*N), SC - O(1)
};