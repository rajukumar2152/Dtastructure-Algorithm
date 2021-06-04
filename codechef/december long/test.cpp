// #include <bits/stdc++.h>
// using namespace std; 


// int main(){
// // #ifndef ONLINE_JUDGE
// // 	freopen("input.txt", "r", stdin);
// // 	freopen("output.txt", "w", stdout);
// // #endif
// //    string a; 
// //    cin>>a ; 
// //    cout<<a <<endl ; 

// //    char b[5];
// //    for(int i=0 ; i<5 ; i++){
// //    	cin>>a
// //    }
//    vector<int> freq(11, 0);
//    cout<<freq.size();
   
// 	return 0 ; 
// }


#include <bits/stdc++.h>
using namespace std;

void solveTestCase() {
   int N;
   cin >> N;
   vector<int> freq(11, 0);
   for(int i = 0; i < N; i ++) {
      int in;
      cin >> in;
      freq[in] ++;
   }
   vector<int> freq_of_freq(10001, 0);
   for(int i = 1; i <= 10; i ++) {
      if(freq[i]) {
         freq_of_freq[freq[i]] ++;
      }
   }
   int maxFreq = 0, id = -1;
   for(int i = 1; i <= 10000; i ++) {
      if(freq_of_freq[i] > maxFreq) {
         maxFreq = freq_of_freq[i];
         id = i;
      }
   }
   cout << id << '\n';
}

int main() {
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int testCase;
   cin >> testCase;
   for(int i = 1; i <= testCase; i ++) {
      solveTestCase();
   }

   return 0;
}
