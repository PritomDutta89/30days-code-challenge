class Solution {
public:
    int maxProfit(vector<int>& a) {
         int p=0,x=a[0];
       int i;
       for(i=1;i<a.size();i++)
       {
          if(x>a[i])
             x=a[i];
          else
            p = max(p,a[i]-x);
       }
       return p;
    }
};