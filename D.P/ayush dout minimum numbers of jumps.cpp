class Solution {
public:
	int minJumps(int a[], int n) {
		if (n == 0)
			return -1 ;
		if (n == 1)
			return 1 ;

		int i = 0 ;
		int counter = 1 ;
		int max_taken = INT_MIN ;
		while (i < n) {
			int   prev = a[i] ;
			for (int k = i + 1; k <= prev + i ; k++) {
				max_taken = max(max_taken , a[i] + k) ;
			}
			if (prev + max_taken >= n) {
				counter + 1 ;
				break ;
			}
			else {
				counter = counter + 1 ;
				i =  a[i] + 1 + max_taken ;
			}
		}
		return counter + 1 ;
	}

};
