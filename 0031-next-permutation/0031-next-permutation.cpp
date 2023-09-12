class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i, ind1=-1,ind2=-1,n=a.size();
        //if there is no ele then stop
        if(n<=1)
          return;
        for(i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                ind1 = i;
                break;
            }
        }
        //if there is no data that means last element
        if(ind1!=-1)
        {
           for(i=n-1;i>=0;i--)
           {
                if(a[i] > a[ind1])
                {
                    ind2 = i;
                    break;
                }
            }
            swap(a[ind1], a[ind2]);
        }
        
        reverse(a.begin()+ind1+1, a.end());
    }
};