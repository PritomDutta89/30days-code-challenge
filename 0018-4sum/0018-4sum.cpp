class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long i,j,sum=0;

        for(i=0;i<n-3;i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue; //skip same value in index i to avoid duplicates
            for(j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int left = j+1, right=n-1;
                while(left<right)
                {
                   sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[left]+(long long)nums[right];

                    if(sum>target)
                       right -=1;
                    else if(sum==target)
                    {
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);

                        s.insert(t);

                        left+=1;
                    }
                    else
                      left +=1;
                }
            }
        }

        vector<vector<int>> ans;
        for(auto it : s)
           ans.push_back(it);
        return ans;
    }
};