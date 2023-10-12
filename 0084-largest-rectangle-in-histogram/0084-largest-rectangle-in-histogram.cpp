class Solution {
public: 
    vector<int> NSL(vector<int>& h)
    {
       int pseudoIndex = -1;
       stack<pair<int,int>> s;
       vector<int> v;
       int n = h.size();

       for(int i=0; i<n; i++)
       {
            if(s.size()==0)
              v.push_back(pseudoIndex);
            else if(s.size()>0 && s.top().first<h[i])
              v.push_back(s.top().second);
            else
            {
                while(s.size()>0 && s.top().first>=h[i])
                  s.pop();
                if(s.size()>0)
                  v.push_back(s.top().second);
                else
                  v.push_back(pseudoIndex);
            }
            
            s.push({h[i], i}); 
        }
        return v;
    }

    vector<int> NSR(vector<int>& h)
    {
       int pseudoIndex = h.size();
       stack<pair<int,int>> s;
       vector<int> v;
       int n = h.size();

       for(int i=n-1; i>=0; i--)
       {
            if(s.size()==0)
              v.push_back(pseudoIndex);
            else if(s.size()>0 && s.top().first<h[i])
              v.push_back(s.top().second);
            else
            {
                while(s.size()>0 && s.top().first>=h[i])
                  s.pop();
                if(s.size()>0)
                  v.push_back(s.top().second);
                else
                  v.push_back(pseudoIndex);
            }
            
            s.push({h[i], i}); 
        }
        reverse(v.begin(), v.end());
        return v;
    }

    int largestRectangleArea(vector<int>& h) {
        vector<int> left = NSL(h);
        vector<int> right = NSR(h);
        int max=0;

           
        for(int i=0;i<left.size();i++)
        {
            int p = (abs(right[i] - left[i] -1)) * h[i];
            if(max<p)
              max=p;
        }
        return max;
    }
};