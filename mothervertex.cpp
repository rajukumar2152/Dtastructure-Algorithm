#include<iostream>
#include  <map>
#include <list>
#include<vector>
#include<queue>
using namespace std;
#define V 6
class Graph {
public:
   map<int, list<int> > l;

   void addedge(int x, int y ) {
      l[x].push_back(y);

   }

   void dfshelper(int src, vector<bool> visited) {

      // cout<<src<<" ";
      visited[src] = true;
      for (int i = 0; i < V; i++) {
         if (!(visited[src])) {

            for (auto p : l[src]) {
               dfshelper(p, visited);
            }
         }
      }

   }

   int  dfs(int src) {
      // map<int ,int> l;
      // int node = l.first;
      // vector<bool ;
      // queue<int> q;
      // q.push(src) ;
      vector<bool> visited(V, false);

      for (int i = 0 ; i < V ; i++) {
         if (visited[i] == false)

            dfshelper(i, visited);
         src = i;


         fill(visited.begin(), visited.end(), false);
         dfshelper(src, visited);
         for (int j = 0; j < V; j++) {
            if (visited[j] == false)
               return -1;

            return src ;



         }
      }

   }
};

int main() {
   cout << "hello world ";


   return 0;
}