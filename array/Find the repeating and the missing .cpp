# include <bits/stdc++.h>
using namespace std;


void findmisrept(int a[] , int n ) {
	sort(a , a + n);
	int reptno = 0;
	int j = 0;
    int misno;
	for (int i = 0; i < n-1 ; i++) {
		
		if (a[i] == a[i + 1]) {
			reptno = a[i];
			
		}
	}
	for(int j =0 ; j<n ; j++){
		if(a[j]!=j+1){  // agar ek beer mil gaya to break kar do ; j 0 se suru ho rahaa hain 
			misno=j+1;  //
			break;
			
		}
	}
	cout<<"missing no is "<<misno<<endl; 
	cout<<"reptno is "<< reptno;  
	
}

int main() {
	int arr[] = { 7, 3,4,5,5, 2,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findmisrept(arr, n);

	return 0;
}