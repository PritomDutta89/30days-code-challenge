class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& p1, vector<int>& p2) {
        vector<int> v;
        map<int,int> mp;
        int i;
        stack<int> s;

        for(i=p2.size()-1; i>=0;i--)
        {
            if(s.empty())
              mp[p2[i]]=-1;
            else if(s.size()>0 && s.top()>p2[i])
              mp[p2[i]]= s.top();
            else
            {
                while(s.size()>0 && s.top()<p2[i])
                   s.pop();
                if(s.size()>0 && s.top()>p2[i])
                   mp[p2[i]]= s.top();
                else
                   mp[p2[i]] = -1;
                   
            }
            s.push(p2[i]);
        }

        for(i=0;i<p1.size();i++)
        {
            if(mp[p1[i]])
              v.push_back(mp[p1[i]]);
        }
        return v;
    }
};