// bilkul sahi run kar raha hain
#include <bits/stdc++.h>
using namespace std;

struct  mettting
{
	int start ;  // yaha sruct meeting banaie hain
	int end ;
	int pos ;
};

bool compare(mettting m1 , mettting m2) {
	return (m1.end < m2.end);
}


void maxmeet(int s[], int f[] , int n )
{
	struct  mettting milgaye[n];  // sruct meeting ke help se array banaya hain
	// isme tin cheez hain
	for (int i = 0 ; i < n ; i++) {
		milgaye[i].start = s[i];  // yaha milgaya arrray ko frll kar rahe hain
		milgaye[i].end = f[i];
		milgaye[i].pos = i + 1;
	}
	sort(milgaye , milgaye + n , compare); // yaha  finish time ke hisab se sort kiya hain
	vector<int> v;
	v.push_back(milgaye[0].pos); // yaha vector me position push kar diya hain
	int timelimit = milgaye[0].end;
	for (int i = 1 ; i < n ; i++) {
		if (milgaye[i].start > timelimit) { // 1 index se start kiya
			v.push_back(milgaye[i].pos); // agar starting time pichle wale finsh(timelimit)
			timelimit = milgaye[i].end;   //se jyda hain to vector me position push kar do
		}

	}
	for (auto i : v) {
		cout << i << " ";  // yaha print kar diya jo vector me push hua the
	}
}
int main() {
	int s[] = { 1, 3, 0, 5, 8, 5 };

	// Finish time
	int f[] = { 2, 4, 6, 7, 9, 9 };

	// Number of meetings.
	int n = sizeof(s) / sizeof(s[0]);
	maxmeet(s, f , n );

	return 0 ;
}