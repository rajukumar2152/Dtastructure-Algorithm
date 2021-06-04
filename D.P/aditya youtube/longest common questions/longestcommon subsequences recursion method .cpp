#include <bits/stdc++.h>
using namespace std;
int loncomsubseq(string x , string y , int n , int m ){
	if(n==0 ||m==0){
		return 0 ; // base cse hain ek bhi string empty hain
		         // to zero retrn kar do 
	}
	if(x[n-1]==y[m-1]){
		return 1+loncomsubseq(x , y , n-1, m-1);// agar last wala element mach karta hai 
	         // to hame 1 subsequence mil gaya isliye 1 add kiya .aage hum ek size kam kar check 
             // karenge
	}
	else {
		return max(loncomsubseq(x ,y , n,m-1), loncomsubseq(x,y , n-1, m));
	}         // agra last element match nahi karta hain to ek bar hum x ki size kam
	         //karke check karenge aur ek bar y ki size ko kam karke check karenge 
             // dono me se jo max return karga wo return kar denge ;
}            

int main(){

	// string str1 = "ABCDGH";
 //    string str2 = "AEDFHR" ; 
	string str1 = "ABC";
    string str2 = "AC" ;
    cout<< loncomsubseq(str1, str2 , 3 , 2 ); 
	return 0 ; 
}