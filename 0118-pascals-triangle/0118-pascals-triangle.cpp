class Solution {
public:
    vector<vector<int>> generate(int n) {
        //optimize
        vector<vector<int>> v(n);
        int i;
        for(i=0;i<n;i++)
        {
            v[i].resize(i+1);
            v[i][0] = v[i][i] = 1;

            for(int j=1; j<i; j++)
            {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
        return v;



        // vector<vector<int>> v1;
        // vector<int> v2;
        // vector<int> v3;
        
        // v1.push_back({1});
        // if(n==1)
        //  return v1;
        // v1.push_back({1,1});
        // if(n==2)
        //   return v1;
        // int i,j,c=0;
        // v3.push_back(1);
        // v3.push_back(1);
        // for(i=3;i<=n;i++)
        // {
        //    c=i;
        //    j=0;
        //    while(j<c-1)
        //    {
        //         if(j==0)
        //          v2.push_back(1);
        //         if(j==c-2)
        //           v2.push_back(1);
        //         else
        //         {
        //             v2.push_back(v3[j]+v3[j+1]);
        //         }
        //         j++;
        //    }
        //    v3=v2;
        //    v1.push_back(v2);
        //    v2.clear();;
        // }
        // return v1;
    }
};