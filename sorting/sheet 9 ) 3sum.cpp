class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int> > res;

        sort(num.begin(), num.end());

        for (int i = 0; i < num.size(); i++) {

            int target = -num[i]; // hame jo bhi nusm[i] hoga usko change kar denge kunki aage sab increasing hain
            int front = i + 1;      // thod sa soch hame -ve jo bhi ayega  wwo ad hote jayeha ahr 0 ke barabar aat hain too
            // wo apna  answer hain otherwise answer  nahi hain
            int back = num.size() - 1;

            while (front < back) {

                int sum = num[front] + num[back];

                // Finding answer which start from number num[i]
                if (sum < target)
                    front++;

                else if (sum > target)
                    back--;

                else {
                    vector<int> triplet = {num[i], num[front], num[back]};
                    res.push_back(triplet);

                    // Processing duplicates of Number 2
                    // Rolling the front pointer to the next different number forwards
                    while (front < back && num[front] == triplet[1]) front++;

                    // Processing duplicates of Number 3
                    // Rolling the back pointer to the next different number backwards
                    while (front < back && num[back] == triplet[2]) back--;
                }

            }

            // Processing duplicates of Number 1
            while (i + 1 < num.size() && num[i + 1] == num[i])
                i++;
        }

        return res;
    }
};



// 15. 3Sum
// Medium

// 11079

// 1106

// Add to List

// Share
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.



// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Example 2:

// Input: nums = []
// Output: []
// Example 3:

// Input: nums = [0]
// Output: []


// Constraints:

// 0 <= nums.length <= 3000
// -105 <= nums[i] <= 105