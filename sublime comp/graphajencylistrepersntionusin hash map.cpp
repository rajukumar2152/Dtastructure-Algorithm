// bilkul sahi run kr raha hain
#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<list>

using namespace std;
class  Graph {
private:
	unordered_map<string, list<pair<string, int>>> l;
public:
	//unordered_map<string, list<pair<string, int>>> l;
	void addeadge(string  x , string y , int dis , bool bidr) {
		l[x].push_back(make_pair ( y, dis));
		if (bidr == true) {
			l[y].push_back(make_pair(x, dis));
		}
	}
	void printnode() {
		for (auto nbrs : l) {  // nbrs map ke ek index ko chaka iske pass ek key hoga aur
			string node;      // ek value ;
			list<pair<string, int>> nbrpair;
			node = nbrs.first;
			nbrpair = nbrs.second;
			cout << node << "->";
			for (auto padoosi : nbrpair) {
				string nodename;
				int dis;
				nodename = padoosi.first;
				dis = padoosi.second;
				cout << "(" << nodename << "," << dis << ")"  ;
			}
			cout << endl;
		}
	}
};




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Graph  g ;
	g.addeadge("a", "b", 20, true);
	g.addeadge("a", "c", 10, true);
	g.addeadge("b", "d", 40, true);
	g.addeadge("d", "c", 30, true);
	g.addeadge("a", "d", 50, false);
	g.addeadge("a", "h", 50, false);
	g.printnode();




	return 0 ;
	// Graph  g ;
	// g.addeadge("a", "b", 20, true);

}