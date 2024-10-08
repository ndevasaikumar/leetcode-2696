class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        for(int i = 0; i < s.length(); i++){
            if(stk.empty()){
                stk.push(s[i]);
                continue;
            }
            if(s[i] == 'B' && stk.top() == 'A')
                stk.pop();
            else if(s[i] == 'D' && stk.top() == 'C')
                stk.pop();
            else
                stk.push(s[i]);
        }
        return stk.size();
    }
};
