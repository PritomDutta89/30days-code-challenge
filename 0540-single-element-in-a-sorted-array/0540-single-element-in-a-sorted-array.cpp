class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int i=0,j=a.size()-1;

        // if(a.size() == 1)
        // {
        //     return a[0];
        // }
        // if(a.size()==2 && a[0]!=a[0+1])
        // { 
        //     return a[0];
        // }

        while(i<=j)
        {
            int m = (i+j)/2;

            if(m-1>=0 && m+1<a.size())
            {
                if(a[m]!=a[m-1] && a[m]!=a[m+1])
                {
                    return a[m];
                }
                else if((m%2==0 && a[m]==a[m+1]) || (m%2!=0 && a[m]==a[m-1]))
                  i=m+1;
                else
                  j=m-1;
            }
            else
             break;
        }
        if(i==j)
          return a[i];
        return a[0];
    }
};