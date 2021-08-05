class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        map<int, int> counter;   // hash map le liya hain . hash mep me surat me sare elemet zero hote hain

        for (int i = 0 ; i < nums.size(); i++) {
            counter[nums[i]]++;//or counter[nums[i]]= counter[mums[i]]+1 ;
            if (counter[nums[i]] > n / 2)
                return nums[i] ;
        }
        return 0 ;
    }
};


//         for (int num : nums) {

//             if (++counter[num] > nums.size() / 2) {
//                 return num;
//             }
//         }
//         return 0;



// 169. Majority Element
// Easy

// 5318

// 265

// Add to List

// Share
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -231 <= nums[i] <= 231 - 1