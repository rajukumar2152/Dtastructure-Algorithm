# include <bits/stdc++.h> 
# include<stack>
using namespace std; 
struct  Interval
{
	int start ; 
	int end; 
};
bool comapare(Interval l1 ,Interval l2 ){
	return l1.start<l2.start; 
}
void mergeInterval(Interval a[] , int n ){
	if(n==0){
		return ; 
	}

	sort(a , a+n , comapare);
    stack<Interval> s ;
    Interval top ; 
    s.push(a[0]);
    // top =s.top();
    for(int i=1 ; i<n ; i++){
    	 top =s.top();   // stack me dal diya a[0] ka value 
    	if(top.end>=a[i].start){
    	                        // yaha overlap kar raha hain  eg  (1 ,5)(3,6)  yaha change kar do end value 
    		              // aur fir uske bad jo stack me hain use pop kar do .. fir fresh value stack me push kar do 
    			top.end=a[i].end; 
    			s.pop();
    			s.push(top);
    	}
    	else if (top.end<a[i].start){
    		
    		
    		s.push(a[i]);  // yaha overlap nahi katr raha hain fir  simople agle vale par chale jao ; 


    	}



    }
    while(!s.empty()){
    		cout<<s.top().start <<" "<< s.top().end<<" "; // yaha printr kar diya stack me sirf ek hi value hoga .
    		s.pop();
    	}

}

int  main(){
	 Interval arr[] =  { {6,8}, {2,4}, {4,7} }; 
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeInterval(arr , n );

	return 0 ; 
}

// Merge Overlapping Intervals
// Last Updated: 18-10-2019
// Given a set of time intervals in any order, merge all overlapping intervals into one and output the result which should have only mutually exclusive intervals. Let the intervals be represented as pairs of integers for simplicity.
// For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8} }. The intervals {1,3} and {2,4} overlap with each other, so they should be merged and become {1, 4}. Similarly {5, 7} and {6, 8} should be merged and become {5, 8}

// Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
// Write a function which produces the set of merged intervals for the given set of intervals.

// A simple approach is to start from the first interval and compare it with all other intervals for overlapping, if it overlaps with any other interval, then remove the other interval from list and merge the other into the first interval. Repeat the same steps for remaining intervals after first. This approach cannot be implemented in better than O(n^2) time.

// An efficient approach is to first sort the intervals according to starting time. Once we have the sorted intervals, we can combine all intervals in a linear traversal. The idea is, in sorted array of intervals, if interval[i] doesn’t overlap with interval[i-1], then interval[i+1] cannot overlap with interval[i-1] because starting time of interval[i+1] must be greater than or equal to interval[i]. Following is the detailed step by step algorithm.

// 1. Sort the intervals based on increasing order of 
//     starting time.
// 2. Push the first interval on to a stack.
// 3. For each interval do the following
//    a. If the current interval does not overlap with the stack 
//        top, push it.
//    b. If the current interval overlaps with stack top and ending
//        time of current interval is more than that of stack top, 
//        update stack top with the ending  time of current interval.
// 4. At the end stack contains the merged intervals