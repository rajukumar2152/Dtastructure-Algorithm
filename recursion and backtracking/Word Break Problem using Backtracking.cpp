#include<iostream>
using namespace std;

int jahasedhudhna(string prefix){
	string dictionary[] = {"mobile","samsung","sam","sung", 
                            "man","mango", "icecream","and", 
                            "go","i","love","ice","cream"}; 
    int n = sizeof(dictionary)/sizeof(dictionary[0]);
    for(int i =0 ; i<n ; i++){
    	if(dictionary[i]==prefix)
    		return true ; 
    }    
    return false ;          
}

void utilityfun(string str  , int size  , string result ){
	for(int i=1 ; i<=size ; i++){
		string prefix= str.substr(0,i);
		if(jahasedhudhna(prefix)){
			if(i==size){
				result = result+prefix;
				cout<<result;

				return; 
				break;
			}
		}
		utilityfun(str.substr(i , size-i) , size-i, result+prefix+" ");
	}
	// cout<<result ; 

}


int main(){
	string str ="iloveicecreamandmango";
	string result=" ";
	utilityfun(str , str.size() , result);
	cout<<result;


	return 0 ; 

}