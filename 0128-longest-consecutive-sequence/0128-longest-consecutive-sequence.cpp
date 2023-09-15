class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        set<int> s;
        int i,c,c1=0;
        for(i=0;i<v.size();i++)
        {
          s.insert(v[i]);
        }
        for(auto it : v)
        {
            if(!s.count(it-1))
            {
               int x = it+1;
               c = 1;
               while(s.count(x))
               {
                   x = x+1;
                   c++;
               }
               c1 = max(c,c1);
            }
        }

        return c1;

        

    }
};