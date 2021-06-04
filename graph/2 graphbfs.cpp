// bst (breath first travesal) ko hum lwvel order traversal bolte hain
#include<iostream>
#include<map>
#include<queue>
#include <list>
using namespace std;

class Graph {
public:
	std::map<int, list<int>> l;

	void add(int x , int y ){
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void bfs(int src)
	{
		map<int , bool > visted ; 
		queue<int > q ; 
		q.push(src);
		visted[src]= true;
    

    while(!q.empty()){
    	int node = q.front();
    	q.pop();
    	cout<<node << " " ;
    	for(int  nbr:l[node]){     // nbr is not visisted 
    		if (!visted[nbr]){
    			q.push(nbr);
    			visted[nbr]= true;

    		    }  
    	  }
      }
    }

};

int main(){
	Graph g ; 
	g.add(0,1);
	g.add(0,3);
	g.add(1,2);
    g.add(2,3);
     g.add(2,9);
    g.add(3,4);
    g.add(4,5);

    g.bfs(0);





	return 0;
}