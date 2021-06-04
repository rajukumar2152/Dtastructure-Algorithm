#include<iostream>
using namespace std;
// move disk 1 from rod 1 to rod 2
void solve(int n , int s , int d , int h ) {
	if (n == 1) { //agar ek plate rah jata hain to usko 3 wale par bhej do
		cout << "move  disk " << n << " from rod " << s << " to rod " << d << endl;
	}
	else {
		solve(n - 1, s , h , d); // n-1 plate ko 2 plate ppar bhej do
		cout << "move  disk " << n << " from rod " << s << " to rod " << d << endl;
		solve(n - 1 , h , d, s); // yaha jo n-1 plate hain usko 3sre wale plate par bhej do
	}

}
int main()
{
	//code
	solve(3 , 1, 3, 2);
	return 0;
}

// resursion aasan hain  bas IBH rule follow karna hota hain
// induction base hopothesis fir ho jate hain solve sare problems