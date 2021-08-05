# include <bits/stdc++.h> 
using namespace std; 
void sortthearr(int a[], int n ){
	int low , mid , heigh ;
	low =0 ; 
	mid =0 ; 
	heigh= n-1 ; 
	while(mid<=heigh) {
		if(a[mid]==0){
			swap(a[mid], a[low]);  // for mor detail se the below artical 
			mid++ ; 
			low++; 
		}
		else if(a[mid]==1){
			mid++;
		}
		else
		{
			swap(a[mid] , a[heigh]);
			heigh--;
		}
       }
}
int main(){
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    sortthearr(arr, n );
    for(int i =0 ; i< n ; i++){
    	cout<<arr[i]<<" "; 
    }
   return 0 ; 
}


// Sort an array of 0s, 1s and 2s
// Last Updated: 28-05-2020
// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

// Examples:

// Input: {0, 1, 2, 0, 1, 2}
// Output: {0, 0, 1, 1, 2, 2}

// Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
// Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
// Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution.
// A simple solution is discussed in this(Sort an array of 0s, 1s and 2s (Simple Counting)) post.

// Method 1

// Approach:The problem is similar to our old post Segregate 0s and 1s in an array, and both of these problems are variation of famous Dutch national flag problem.
// The problem was posed with three colours, here `0′, `1′ and `2′. The array is divided into four sections:

// a[1..Lo-1] zeroes (red)
// a[Lo..Mid-1] ones (white)
// a[Mid..Hi] unknown
// a[Hi+1..N] twos (blue)
// Dutch National Flag Algorithm OR 3-way Partitioning:
// At first, the full array is unknown. There are three indices – low, mid and high. Initially, the value of low = mid = 1 and high = N.




// If the ith element is 0 then swap the element to the low range, thus shrinking the unknown range.
// Similarly, if the element is 1 then keep it as it is but shrink the unknown range.
// If the element is 2 then swap it with an element in high range.
// Algorithm:
// Keep three indices low = 1, mid = 1 and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).
// Traverse the array from start to end and mid is less than high. (Loop counter is i)
// If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
// If the element is 1 then update mid = mid + 1
// If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed
// Print the output array.
// Dry Run:
// Part way through the process, some red, white and blue elements are known and are in the “right” place. The section of unknown elements, a[Mid..Hi], is shrunk by examining a[Mid]:
// DNF1

// Examine a[Mid]. There are three possibilities:
// a[Mid] is (0) red, (1) white or (2) blue.
// Case (0) a[Mid] is red, swap a[Lo] and a[Mid]; Lo++; Mid++

// DNF2

// Case (1) a[Mid] is white, Mid++

// DNF3

// Case (2) a[Mid] is blue, swap a[Mid] and a[Hi]; Hi–




// DNF4

// Continue until Mid>Hi.