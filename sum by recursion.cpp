#include<iostream>
#include<list>
#include <vector>
#include<algorithm>

using namespace std;

void choloateprob(int price, int rate , int wrapper ) {
	int choklate;
	std::vector<int > v;

	choklate = price / rate;
	int num = choklate;
	while (num >= wrapper) {
		choklate = choklate + num / wrapper;
		v.push_back(num % wrapper);

		num = num / wrapper;
	}
	sort(v.begin(), v.end());
	if (v[1] + num == wrapper) {
		choklate = choklate + 1;
	}
	cout << v[1] << endl;

	cout << choklate;

}



int main() {
	//cout << recmultiply(5, 2);
	choloateprob(20, 3, 5);

	return 0 ;
}
