// LEETCODE SOLUTION
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		//strRef is the first string

		string strRef = strs[0];
		int mi = INT_MAX;

		if (strs.size() == 0)
			return "";

		//to traverse 2nd string to last string and compare it with the first string

		for (int i = 1; i < strs.size(); i++)
		{
			int j = 0, k = 0, a = 0;
			//j is the size of first string, k is the size of i-th string, a is the size of commom prefix

			while (j < strRef.size() && k < strs[i].size())
			{
				if (strRef[j] == strs[i][j])
					a++;
				else
					break;

				j++;
				k++;
			}
//this is the length of substring that is common for all the strings in vector

			mi = min(mi, a);
		}
		return strRef.substr(0, mi);
	}
};

//////////////////////////////////
// 14. Longest Common Prefix
// Easy

// 4588

// 2318

// Add to List

// Share
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".



// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.


// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lower-case English letters.
///////////////////////////////////////////
// thodi di dikkat aa rahi hain  pata nahi kyun
#include <bits/stdc++.h>
using namespace std;
int maxlength(string arr[] , int n ) {
	int minlength = INT_MAX;
	for (int i = 0 ; i < n ; i++) {
		if (arr[i].length() < minlength ) {
			minlength = arr[i].length();
		}
	}
	return minlength;
}
bool chek(string arr[], int n , string str , int min , int mid ) {
	for (int i = 0 ; i < n ; i++) {
		for (int j = min ; j < mid  ;  j++) {
			if (arr[i][j] != str[j])
				return false;
		}
	}
	return true ;
}


void logestprefix(string arr[] , int n ) {
	int index = maxlength(arr , n );
	string prefix;
	int min = 0 ;
	int max = index ;
	// int mid = min +(max-min)/2;
	while (min <= max) {
		int mid = min + (max - min) / 2;
		if (arr , n , arr[0], min , mid    ) {
			prefix = prefix + arr[0].substr(min , mid - min + 1);
			//cout<< prefix <<endl;
			min = mid + 1;

		}

		max = max - 1 ;
	}
	cout << prefix;

}
int main() {
	string arr[] = {"eeksforgeeks", "geeks",
	                "geek"
	               };//"geezer"};
	// {"geeksforgeeks", "geeksl", "geeks", "geekser"};
	int n = sizeof (arr) / sizeof (arr[0]);
	// for (int i=0; i<n ; i++){
	// 	cout<< arr[i]<<" ";
	// }
	logestprefix(arr , n );



	return 0 ;
}