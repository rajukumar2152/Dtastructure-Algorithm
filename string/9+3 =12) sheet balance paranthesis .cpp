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



// 20. Valid Parentheses
// Easy

// 7986

// 326

// Add to List

// Share
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.


// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false
// Example 4:

// Input: s = "([)]"
// Output: false
// Example 5:

// Input: s = "{[]}"
// Output: true