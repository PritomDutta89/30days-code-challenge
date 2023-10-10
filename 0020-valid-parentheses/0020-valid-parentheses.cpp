class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        int i;

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
              p.push(s[i]);
            else if(!p.empty())
            {
                if((s[i]==')' && p.top()=='(') || (s[i]=='}' && p.top()=='{') || (s[i]==']' && p.top()=='['))
                  p.pop();
                else
                 break;
            }
            else
            {
                p.push(s[i]);
                break;
            }
        }
        return p.empty();
    }
};