#include <deque>
class RecentCounter {
    deque<int> req;
public:
    RecentCounter() {
    	deque<int>req ={};

        
    }
    
    int ping(int t) {
    	req.push_back(t);
    	while(req.front()<t-3000)req.pop_front();//removing all the element lesser than t-3000
    	return req.size();//size ko return kar diya 
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */