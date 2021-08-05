class Solution {
public:
	int findPairs(vector<int>& nums, int k) {
		if (k < 0) {
			return 0;
		}
		int n = nums.size() ;
		set<int> starter ;
		unordered_map<int, int> indecies ;  // ye agra num[i] lo map karega aur ingement by 1 kar dega
		for (int i = 0 ; i < n ; i++) {
			// hame mod value pucha hain to ek bar nums[i]+k chek kearenge
			// aur ek bar nums[i]-k  ko ncheck karenege

			if (indecies.count(nums[i] - k)) {
				starter.insert(nums[i] - k);
			}
			if (indecies.count(nums[i] + k)) {  // similarly for nums[i]+k ;
				starter.insert(nums[i]);
			}
			indecies[nums[i]]++ ;   // yaha iuncrement kar diya hain
		}
		return starter.size() ;

	}
};

// for best dry run this code onthis exmple
// 532. K-diff Pairs in an Array
// Medium

// 1183

// 1603

// Add to List

// Share
// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

// 0 <= i < j < nums.length
// |nums[i] - nums[j]| == k
// Notice that |val| denotes the absolute value of val.



// Example 1:

// Input: nums = [3,1,4,1,5], k = 2
// Output: 2
// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 1
// Output: 4
// Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).
// Example 3:

// Input: nums = [1,3,1,5,4], k = 0
// Output: 1
// Explanation: There is one 0-diff pair in the array, (1, 1).
// Example 4:

// Input: nums = [1,2,4,4,3,3,0,9,2,3], k = 3
// Output: 2
// Example 5:

// Input: nums = [-1,-2,-3], k = 1
// Output: 2-diff