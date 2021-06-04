# include <bits/stdc++.h>
using namespace std;
bool istrue(bool v){    /// ho jayyega par thora sa dikkat aa raha hain 
	if(v==true){
		return true ;
	}
	else  
		return false ; 
}
int solve (int a[] , int i , int j ){
	if(i>j)
		return 0;
	if(i==j){
		if(istrue()==true)
			return true;
		else if(istrue()==false ){
			return false ;
		   }
		}
	int ans=0 ; 
	for(int k=i+1 ; k<=j-1;k++){
		int lt=solve(a, i, k-1,true);
		int lf=solve(a , i , k-1, false );
		int rt=solve(a , k+1 , j , true);
		int rf = solve(a , k+1 , j , false ); 

		if(a[k]=="&"){
			if(istrue())
		}

	}

}

int main(){


	return 0 ; 
}