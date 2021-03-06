class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s += s;
        string s1, s2;

        for (int i = 0; i < s.size(); i++) {
            s1 += i % 2 ? '0' : '1';   /// this  for s1 me 0101010101 tye store ho jayeneeg
            s2 += i % 2 ? '1' : '0';  // isme 101010101 type binary string store ho jayenag
        }
        int ans1 = 0, ans2 = 0, ans = INT_MAX;
        for (int i = 0; i < s.size(); i++) {
            if (s1[i] != s[i]) ++ans1;
            if (s2[i] != s[i]) ++ans2;
            if (i >= n) { //the most left element is outside of sliding window, we need to subtract the ans if we did `flip` before.
                if (s1[i - n] != s[i - n]) --ans1;
                if (s2[i - n] != s[i - n]) --ans2;
            }
            if (i >= n - 1)
                ans = min({ans1, ans2, ans});
        }
        return ans;
    }
};