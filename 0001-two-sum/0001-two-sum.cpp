class Solution {
public:
    vector<int> twoSum(vector<int>& p, int t) {
        map<int, int> mp;
        vector<int> v;
        for(int i=0;i<p.size();i++)
        {
            
            if(mp.find(t-p[i]) != mp.end())
            {
                v.push_back(i);
                v.push_back(mp[t-p[i]]);
                break;
            }
            else
             mp[p[i]] = i;
        }
        return v;
    }
};