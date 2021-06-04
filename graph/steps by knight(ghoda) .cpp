#include <bits/stdc++.h>
using namespace std;  // aadha ho gaya hain baki bad me karta hun 

int minStepToReachTarget(int *, int *, int);

// Driver code to test above methods
int main() {
    // size of square board
    int t;
    cin >> t;
    while (t--) {
        int N;
        int a, b, c, d;
        cin >> N;
        cin >> a >> b;
        cin >> c >> d;
        int knightPos[] = {a, b};
        int targetPos[] = {c, d};
        cout << minStepToReachTarget(knightPos, targetPos, N) << endl;
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// KnightPos : knight position coordinates
// targetPos : target position coordinated
// N : square matrix size
int  helper(){
    if(x>=N||x>=N||x<0 ||y<0){
        return N+2; 
    }
    if(x==targetPos[0]&&y==targetPos[1]){
        return 0; 
    }
    std::vector<int> v;
    int a1 =0 , a2=0 , a3=0 , a4=0 ; 
    a1= 1+helper(x+2 ,y-1);
    v.push_back(a1);
    a2=1+helper(x+2 , y+1);
     v.push_back(a2);
    a3= 1+helper(x-2 , y-1);
     v.push_back(a3);
    a4 = 1+helper(x-2 , y+1);
     v.push_back(a4);
    a5= 1+helper(x-1 , y+2);
     v.push_back(a5);
    a6= 1+helper(x+1 , y+2); 
     v.push_back(a6);
    a7 = 1+helper(x-1 , y-2);
     v.push_back(a7);
    a8 = 1+helper(x+1 , y-2) ; 
     v.push_back(a8);
     sort(v.begin(), v.end());

    return v[0]; 
}
int minStepToReachTarget(int knightPos[], int targetPos[], int N) {
    // code here
    int x =knightPos[0];
    int y = knightPos[1];
    int xt= targetPos[0];
    int yt = targetPos[1];
    vector<pair<int , int > ,bool> 
}