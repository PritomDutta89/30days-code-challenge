class Solution {
public:
    void sortColors(vector<int>& v) {
           int i,j;
        bool n;
        for(i=0;i<v.size()-1;i++)
        {
            n=false;
            for(j=0;j<v.size()-1-i;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    n=true;
                }
            }
            if(n==false)
                break;
        }
    }
};