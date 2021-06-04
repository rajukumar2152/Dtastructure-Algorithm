// #include <bits/stdc++.h>
// #include <iostream>
// #include<string>
// using namespace std ;
// int min(int x , int y , int z ) {
// 	return min(min( x ,  y ) , z );
// }

// int editdistance(string  str1, string str2 , int m , int n ) {
// 	int dp[m + 1][n + 1];
// 	for (int i = 0 ; i <= m ; i++) {
// 		for (int j = 0 ; j <= n ; j++) {
// 			if (j == 0)
// 				dp[i][j] = i;
// 			else if (i == 0)
// 				dp[i][j] = j; // jab   ek null string diya ho ;
// 			else if (str1[i - 1] == str2[j - 1]) {
// 				dp[i][j] = dp[i - 1][j - 1]; // jo idke diganol me hainn
// 			}
// 			else {
// 				1 +( min(dp[i - 1][j] , dp[i][j - 1] , dp[i - 1][j - 1]));
// 				            //remove      insert      replace
// 				// insert ke liye 1 likh diya baki usko chor kar upar jayenge
// 			}

// 		}

// 	}
//  for (int i =0; i<n ; i++){
//  	for(int j=0 ; j<n ; j++){
//  		cout<< dp[i][j]<<" ";
//  	}
//  	cout<< endl ;
//  }
// 	return dp[m][n];

// }


// int main() {
// 	string str1 = "sunday";
// 	string str2 = "saturday";

// 	cout << editdistance(str1, str2, str1.length(), str2.length());


// 	return 0 ;
// }

// A Dynamic Programming based C++ program to find minimum
// number operations to convert str1 to str2
#include <bits/stdc++.h>
using namespace std;

// Utility function to find the minimum of three numbers
int min(int x, int y, int z)
{
	return min(min(x, y), z);
}

int editDistDP(string str1, string str2, int m, int n)
{
	// Create a table to store results of subproblems
	int dp[m + 1][n + 1];

	// Fill d[][] in bottom up manner
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			// If first string is empty, only option is to
			// insert all characters of second string
			if (i == 0)
				dp[i][j] = j; // Min. operations = j

			// If second string is empty, only option is to
			// remove all characters of second string
			else if (j == 0)
				dp[i][j] = i; // Min. operations = i

			// If last characters are same, ignore last char
			// and recur for remaining string
			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			// If the last character is different, consider all
			// possibilities and find the minimum
			else
				dp[i][j] = 1 + min(dp[i][j - 1], // Insert
								dp[i - 1][j], // Remove
								dp[i - 1][j - 1]); // Replace
		}
	}

	return dp[m][n];
}

// Driver program
int main()
{
	// your code goes here
	string str1 = "sunday";
	string str2 = "saturday";

	cout << editDistDP(str1, str2, str1.length(), str2.length());

	return 0;
}
