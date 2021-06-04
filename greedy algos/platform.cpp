
//sahi run ho raha hain
#include <bits/stdc++.h>
using namespace std;
#include<string>

bool compare(pair<int , char> a , pair<int , char>  b ) {
	return a.first < b.first;

}

int  platform(int s[] , int f[] , int n ) {
	vector<pair<int , char>> p ;
	for (int i = 0 ; i < n ; i++) {
		p.push_back(make_pair(s[i] , 'a'));  // arrival  aur depacture ko vector me dal diya
		p.push_back(make_pair(f[i] , 'd'));
	}
	sort(p.begin() , p.end() , compare);  // yaha short kar diya taki ime ke acoordinf short ho jaye
	                                   // khud soach platform kab required hoga jab phali train ke
	int required_platform = 0;  // ya intialise kiya            // khulne se pahle hi dusra train aa jaye .
	int result = 0;
	for (auto i : p) {
		if (i.second == 'a') {
			required_platform++; // agar a hua to  incriment kar do

		}
		else
			required_platform--; // other wise decrement kar do
		if (required_platform > result) {
			result = required_platform;  // reqplatform jyaada hua  result se to usko change kar do
		}


	}
	//cout << result << endl;
	return result;
}

int main () {
	int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
	int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "required platform is ->";
	cout << platform(arr , dep , n);



	return 0 ;
}