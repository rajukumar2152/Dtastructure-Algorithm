/* C++ program for finding out majority  
element in an array */
#include <bits/stdc++.h> 
using namespace std; 
  
void findMajority(int arr[], int size) 
{ 
    unordered_map<int, int> m; 
    //m[0] , m[1]..........likhte main to un sabhi ka value zero ayega .
    for(int i = 0; i < size; i++) 
        m[arr[i]]++;  // map me intial sabi key ka value value zero hota hain 
       int count = 0; 
    for(auto i : m) 
    { 
        if(i.second > 0) 
        { 
            count =1; 
            cout << "Majority found :- " << i.first<<endl; 
            break; 
        } 
    } 
    if(count == 0) 
        cout << "No Majority element" << endl; 
} 
  
// Driver code  
int main()  
{  
    int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3 ,4};  
    int n = sizeof(arr) / sizeof(arr[0]);  
      
    // Function calling  
    findMajority(arr, n);  
  
    return 0;  
}  
  
// This code is contributed by codeMan_d 