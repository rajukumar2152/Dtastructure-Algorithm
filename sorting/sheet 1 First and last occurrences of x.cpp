//find first and last occurance of x in an arry
// time complexity is (logn)

class Solution {
public:
	vector<int> searchRange(vector<int>& a, int x) {
		int n = a.size();
		int f = -1, s = -1;
		int l = 0, m, r = n - 1;

// finding the first index
		while (l <= r)
		{
			m = (l + r) / 2;
			if (a[m] == x)
			{
				f = m;  // agar ek bar il gaya to dubara check akr lo kahi iske pahle ye no to nahi naaya hain
				r = m - 1;  // isliye r ko kam ker diya
			}
			else if (a[m] < x)
				l = m + 1;  // x a[mid] se bada iska matlab x jo m hain us se aage hi milega is l ko m+1 kiya
			else
				r = m - 1; // otherwise  mid se pahle milega
		}

// finding the second index
		l = 0, r = n - 1;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (a[m] == x)
			{
				s = m;
				l = m + 1; //yaha hum second ke liye check kar rahe han kahin mid ke aage bhi x to nhi mil raha hain na
			}
			else if (a[m] < x)
				l = m + 1;
			else
				r = m - 1;
		}
		return vector<int>({f, s});
	}
};


// 34. Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.



// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]