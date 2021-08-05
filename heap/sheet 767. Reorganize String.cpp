/*
1. Create a frequency map. Push the letter and frequency in it.
2. Push the keys into the mapHeap, where comparison will be based on frequency.
3. Pop first two characters, fill in string, reduce their frequency in hash maps, push back those into maxHeap(if freq>0), till only one or zero elements left in heap.
4. return the string.
*/

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mp;  //take a unorderd map
        for (char c : s) // is se hame masimem no kon sa chareter aya hain wo pata chal jayega
            mp[c]++;

        for (auto it : mp) {
            if (it.second > (n + 1) / 2) // agar aadhe se jyda hua sidha return kar do
                return "";
        }

        priority_queue<pair<int, char>> pq;
        for (auto it : mp)            // otherwise ek priority_queue lekar usme sabhi kavalue dal do
            pq.push({it.second, it.first});
        // pahle jo jyada bar aya hain use even poition par dal do fir disro ki bari ayegi
        string ans = "";
        while (pq.size() > 1) {
            pair<int, char>p1 = pq.top();   // top par tha usko le liya
            pq.pop();     // fir pop kar diya
            pair<int, char>p2 = pq.top(); //  uske bad jo max no usko liya
            pq.pop(); // fir pop kar diya

            ans = ans + p1.second + p2.second;   // ans me pahe p1 fir p2

            if (mp[p1.second] > 1) { // p1 ka value grater thab 1 hain
                mp[p1.second]--;  // kam kar do
                pq.push({mp[p1.second], p1.second}); // fir usko dubara pq me push kar do
            }                                          // yaha chalaki dekh rahe ho
            if (mp[p2.second] > 1) { // p2 ki size check kr rahe hain
                mp[p2.second]--;
                pq.push({mp[p2.second], p2.second});  // pq me dubara push kar diya
            }

        }

        if (pq.size() == 1) {
            ans += pq.top().second;  // jab pq ka size 1  rah jata hain to ye operation perform hoga
            pq.pop();
        }

        return ans;
    }
};