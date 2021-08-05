# include <bits/stdc++.h> 
using namespace std;
int longsubseq(int a[] , int n ){
	unordered_set<int > s ; 
	int ans=0 ; 
	for(int i=0 ; i<n ; i++){
		s.insert(a[i]);
    int j = a[i]-1;
    // int ans-=0 ; 
    if(s.find(j)==s.end()){
    	j = a[i];

    	while(s.find(i)!=s.end()){
    		j++;
    	}
    	// ans= max(ans , j-a[i]);
    }
    ans= max(ans , j-a[i]);

	}
	return ans;


}

int main (){
	int arr[] = { 1, 9, 3, 10, 4, 20, 2 }; 
    int n = sizeof arr / sizeof arr[0]; 
    cout<<longsubseq(arr , n );




	return 0 ; 
}