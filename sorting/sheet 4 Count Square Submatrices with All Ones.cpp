// 1277. Count Square Submatrices with All Ones
class Solution {
public:
	int countSquares(vector<vector<int>>& M) {
		int r = 0;
		for (int i = 0; i < M.size(); ++i) //all rows
			for (int j = 0; j < M[i].size(); ++j) { // all columns
				if (i and j and M[i][j]) // exclude first row/col and zeros
					M[i][j] = min(M[i - 1][j - 1], min(M[i - 1][j], M[i][j - 1])) + 1; // find max size of square at this corner by looking one step backwards
				r += M[i][j]; // add number of squares (max size) at this corner
			}
		return r;
	}
};

// class Solution {
// public:

// 	int countSquares(vector<vector<int>>& matrix) {
// 		int n = matrix[0].size() ;
// 		int squrecount = 0 ;
// 		for (int i = 0 ; i < n ; i++) {
// 			for (int j = 0 ; j < n ; j++) {
// 				if (i >= 0 && j >= 0 && matrix[i][j - 1] && matrix[i - 1][j - 1] && matrix[i - 1][j]) {
// 					matrix[i][j] = min(min(matrix[i][j - 1], matrix[i - 1][j - 1]), matrix[i - 1][j]) + 1 ;
// 					squrecount = squrecount + matrix[i][j];
// 				}
// 				else if (matrix[i][j] && i && j) {
// 					matrix[i][j] = 1 ;
// 					squrecount = squrecount + matrix[i][j]  ;
// 				}
// 				else {
// 					matrix[i][j] = 0 ;
// 				}
// 			}
// 		}

// 		return squrecount;
// 	}
// };









// 1277. Count Square Submatrices with All Ones
// Medium

// 2061

// 33

// Add to List

// Share
// Given a m * n matrix of ones and zeros, return how many square submatrices have all ones.



// Example 1:

// Input: matrix =
// [
//   [0,1,1,1],
//   [1,1,1,1],
//   [0,1,1,1]
// ]
// Output: 15
// Explanation:
// There are 10 squares of side 1.
// There are 4 squares of side 2.
// There is  1 square of side 3.
// Total number of squares = 10 + 4 + 1 = 15.
// Example 2:

// Input: matrix =
// [
//   [1,0,1],
//   [1,1,0],
//   [1,1,0]
// ]
// Output: 7
// Explanation:
// There are 6 squares of side 1.
// There is 1 square of side 2.
// Total number of squares = 6 + 1 = 7.