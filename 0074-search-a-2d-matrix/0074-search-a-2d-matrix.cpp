class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int i=0;
        int c = m[0].size()-1;
        while(i<m.size() && c>=0)
        {
            if(m[i][c] == t)
              return true;
            else if(m[i][c] > t)
              c--;
            else
             i++;
        }
        return false;
    }
};