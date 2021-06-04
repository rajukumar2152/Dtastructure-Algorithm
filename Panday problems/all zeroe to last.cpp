# include <bits/stdc++.h>
using namespace std;
void solve(int a[]  , int n ) {
	int i = 0 ;
	int j = 1 ;   // isme hum two pointer ki help lenge
	// ek current ko point karega aur ek uske next  element ko
	while (i < n && j < n) {

		if (a[i] == 0 && a[j] != 0) {
			swap(a[i] , a[j]);   // ager  a[i]=0 hain aur uska agla(j) zero nahi hain
			i = i + 1;               //to hum yaha swap kar denge aur dono pointer ko
			j = j + 1;               // aage padha denge
		}
		else if (a[i] == 0 && a[j] == 0) {
			j = j + 1;    // agar  consequetive zeroes hain to sirf j wala move
		}                 // karega i wala wase ke  wase hi rhega

		else   {
			i = i + 1 ;  // ye wo case hain jab (a[i]!=0&& a[j]!=0) hain yaha sirf hum dono
			j = j + 1 ;  // pointer ko ek ek kadam aage padha denge

		}

	}
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " " ;
	}
}

int main() {

	int a[11] = {5, 1, -2, 3, 0, 0, 0, 5, -27, 9, 0};
	solve(a , 11 );


	return 0 ;
}