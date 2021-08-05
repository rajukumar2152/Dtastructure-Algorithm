class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack<char> sta;
        char temp;
        for (int i = 0; i < len; i++) { // push all the openong paranthesis to a stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                sta.push(s[i]);
            }

            else if ((s[i] == '}' || s[i] == ']' || s[i] == ')')) {
                if (sta.empty())    // when all are closing partheses  in the string like  )}] sso                           //stack me kuch  bhi push hi nahi hoga
                    return false; // heere return false
                else {
                    temp = sta.top(); // now check here one by one  s[i] and top of the stack
                    if (s[i] == ')' && temp == '(')
                        sta.pop();   // if matched the pop the stack
                    else if (s[i] == '}' && temp == '{')
                        sta.pop();
                    else if (s[i] == ']' && temp == '[')
                        sta.pop();
                    else
                        return false;  //  see this case "(])"
                }
            }
        }
        if (!sta.empty())
            return false;
        else
            return true;
    }
};