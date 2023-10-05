class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int i=0,j=a.size()-1;
        
        while(i<j)
        {
            int m = (i+j)/2;

            // if(m-1>=0 && m+1<a.size())
            // {
            //     if(a[m]!=a[m-1] && a[m]!=a[m+1])
            //     {
            //         return a[m];
            //     }
                 if((m%2==0 && a[m]==a[m+1]) || (m%2!=0 && a[m]==a[m-1]))
                  i=m+1;
                else
                  j=m;
            // }
            // else
            //  break;
        }
        // if(i==j)
        //   return a[i];
        // return a[0];

        return a[i];
    }
};