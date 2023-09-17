class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=s.length()-1;
        string temp="", res="";

        while(s[i]==' ')
        {
            i++;
        }

        while(s[j]==' ')
          j--;

        while(i<=j)
        {
            if(s[i]!=' ')
            {
                temp += s[i];
            }
            else
            {
                if(s[i-1]==' ')
                {
                    i++;
                    continue;
                }
                res = temp + " " + res;
                temp = "";
                 
            }
            i++;
        }
        res = temp + " " + res;
        res.erase(res.begin() + res.length() - 1); // to erase extra space at the end
        return res;
    }
};