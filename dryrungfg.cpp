#include<bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma GCC optimize "trapv"
#define _GLIBCXX_DEBUG
#define ll long long int
#define ld long double
#define ull unsigned long long int  // ranges from (0 - twice of long long int)
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define mod 1000000007LL
#define llpair pair<ll,ll>
#define INF 1000000000000000000ll
#define np next_permutation
#define PI acos(-1)
#define deb(x) cout<<#x<<" "<<x<<endl;
#define rotate_left(vec,amt) rotate(vec.begin(),vec.begin()+amt,vec.end());
#define rotate_right(vec,amt) rotate(vec.begin(),vec.begin()+vec.size()-amt,vec.end());
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define clr0(x) memset(x,0,sizeof(x))
#define clr1(x) memset(x,-1,sizeof(x))
//ALWAYS USE ll DATA TYPE FOR INTEGER(FASTER THAN INTEGER AS WELL AS SOMETIMES WITHOUT USE LONG UR ANSWER WILL NOT ACCEPTED) && DOUBLE FOR DECIMAL VALUE



// bool is_palindrome(string s, ll low, ll high)
// {
//   while(low<=high)
//   {
//     if(s[low]!=s[high])
//     return false;
    
//     low++; high--;
//   }
  
//   return true;
// }


// ll static dp[1001][1001]; //create a dp table according to constraints.
// // step 1


// ll palindrome_partition(string s,ll i, ll j)
// {
  
//   if(dp[i][j]!=-1) return dp[i][j]; // step 3 
  
//   if(i>j) // means the gives strings having ends i and j are empty    // first invalid condition.
//   return 0;  // it means we no more cuts required. 
  
  
  
//   if(is_palindrome(s,i,j))
//   return (dp[i][j]=0);   // already is palidrome so no more cost/cuts is required
//               // or we can say no of cuts required is 0.
        
        
        
//   ll mina=INT_MAX;
//   for(ll k=i;k<=j-1;k++)
//   {
//     ll tempans=palindrome_partition(s,i,k) +
//     palindrome_partition(s,k+1,j) + 1;// here 1 is for doing current cost to break i,j to (i to k) and (k+1 to j)
    
    
//     mina=min(mina,tempans);
//   }
  
//   return (dp[i][j]=mina);
// }

int main() {
    //auto start = chrono::high_resolution_clock::now();
  //   fio;
  //   ll t=1; 
  //   cin>>t; 
  //   while(t--)
  //   {
  //   //ll n; cin>>n;
  //   string s; cin>>s;
  //   clr1(dp);  // step 2, make dp table with -1;
  //   cout<<palindrome_partition(s,0,s.length()-1)<<"\n";
  // }
  //   //auto finish = chrono::high_resolution_clock::now();
    //cerr << "Time elapsed: " << (chrono::duration<long double>(finish-start)).count() << "s\n";
    
   ll a = 45 ; cout<<a; 
   rep(i,1,7){
    cout<<i<<" ";
   }
    return 0;
            
}



























