#include <bits/stdc++.h>
using namespace std;

void mincoin(int a[] , int n , int v ) {
	sort(a, a + n);
	vector<int > stor;
	for (int i = n - 1; i >= 0 ; i--) {
		while ((v - a[i]) >= 0) {  /// maximum vale tab tak jata rahe jab tak ki wah 0 naa ho jaye
			v = v - a[i];  // ye wala loop chalta rahega chalta rahega
			stor.push_back(a[i]);
		}

	}
	for (auto i : stor) {
		cout << i << " ";
	}
}

int main()
{
	int deno[] = { 1, 2, 5, 10, 20, 50, 1000, 500, 100 };
//	int n = sizeof(deno) / sizeof(deno[0]);

	mincoin(deno , 9, 6536);

	return 0;
}