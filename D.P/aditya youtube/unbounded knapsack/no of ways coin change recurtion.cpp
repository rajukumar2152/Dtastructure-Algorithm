# include <bits/stdc++.h>
using namespace std;   //code bilkul sahi run kar raha hain par gfg me tle ayega
int count( int S[], int m, int n ){ // isko dp se optomise kar sakte hain 
	if(n==0){      
		return 1;        //note here m=no element in the array
	}                    //n = currency given or can say  given value 

	if(m==0&&n>=1){
		return 0;
	}
	if(n <0){
		return 0;
	}
      
      if(S[m-1]<=n){                     //m-1 ki jagah m likhne se bounded(0/1)knapsak unbonded napsack me badl gaya 
      	 return count(S,m-1, n)+count(S ,m,n-S[m-1]);
      }        //element ko nahi     //yaha element ko liya hain aur  
      else     //liya                 //hum bar bar ek hi element ko le sakte hain isliye   
      	return count(S,m-1 ,n);      //yaha m-1 ki jagah sirf m likha hain 

}
int main(){
	// int n = 4 , m = 3;
    int S[] = {1,2,3};
    cout<<count(S,3,4)<<endl;
	return 0 ;
}