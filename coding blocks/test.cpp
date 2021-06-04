#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define mod 1000000007


int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int d[n];
		int all_flag = 0;
		int all_flag1 = 0;
		for(int i = 0; i < n; i++){
			cin >> d[i];
			if(d[i] == 0) all_flag = 1;
			if(d[i] == 1) all_flag1 = 1;
		}
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int b[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> b[i][j];
			}
		}
		if(all_flag == 0){
			cout << "YES\n";
			cout << "1 0\n";
			continue;
		}
		if(all_flag1 == 0){
			int tl = 1;
			int flag = 0;
			for(int i = 0; i < n; i++){
				int ac = 1;
				for(int j = 0; j < m; j++){
					if(a[i][j] > tl || b[i][j] == 0) ac = 0; 
				}
				if(ac == 1) flag = 1;
			}
			if(flag == 0){
				cout << "YES\n";
				cout << "1 " << m << "\n";
				for(int i = 0; i < m; i++){
					cout << i + 1 << " ";
				}
				cout << "\n";
			}
			else{
				cout << "NO\n";
			}
			continue;
		}
		int valid[m] = {0};
		for(int i = 0; i < m; i++){
			int flag = 1;
			for(int j = 0; j < n; j++){
				if(d[j] == 0) continue;
				if(b[j][i] == 0) flag = 0;
			}
			valid[i] = flag;
		}
		vector<pii> tests;
		// cout << "valid tests\n";
		for(int i = 0; i < m; i++){
			if(valid[i] == 0) continue;
			// cout << i << " ";
			int x = 0;
			for(int j = 0; j < n; j++){
				if(d[j] == 0) continue;
				x = max(x, a[j][i]);
			}
			tests.pb({x, i});
		}
		// cout << "\n";
		sort(tests.begin(), tests.end());
		int n1 = tests.size();
		int c[n][n1] = {0};
		int fail[n][n1] = {0};
		for(int i = 0; i < n1; i++){
			for(int j = 0; j < n; j++){
				if(b[j][tests[i].S] == 0) fail[j][i] = 1;
				else if(i == 0) fail[j][i] = 0;
				else fail[j][i] = fail[j][i - 1];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < tests.size(); j++){
				if(j > 0)c[i][j] = max(c[i][j - 1], a[i][tests[j].S]);
				else c[i][j] = a[i][tests[j].S];
			}
		}
		int correct = 0;
		for(int i = (int)tests.size() - 1; i >= 0; i--){
			int tl = tests[i].F;
			int f[n];
			for(int j = 0; j < n; j++){
				f[j] = fail[j][i];
			}
			for(int j = 0; j < n; j++){
				if(c[j][i] > tl) f[j] = 1;
			}
			int flag = 1;
			for(int j = 0; j < n; j++){
				if(d[j] == f[j]) flag = 0;
			}
			if(flag == 1){
				cout << "YES\n";
				cout << tl << " " << i + 1 << "\n";
				for(int k = 0; k <= i; k++){
					cout << tests[k].S + 1 << " ";
				}
				cout << "\n";
				correct = 1;
				break;
			}
		}
		if(correct == 0)
			cout << "NO\n";
	}	

	return 0;
}