#include <bits/stdc++.h>
using namespace std;
#define N 8
#define M 8
void floodFill(int screen[][M] , int x , int y , int newC , int prevc ){
	
	if(x<0||x>=N||y<0 ||y>=M){  //agar  x ya y  ka value 0 se chota ya n or m se 
		return ;              // jyda aata hain to return kar do 
	}
	if(screen[x][y]!=prevc)  // agar screen[x][y] prev se match nahi karta hain tab bahi retrn kar do 
		return ;
	if(screen[x][y]=prevc){  // gar match karta hain to simplyb change kar do 
		screen[x][y]=newC;
	}	
	floodFill(screen , x-1 ,  y , newC , prevc); 
	floodFill(screen , x+1 ,  y , newC , prevc);  //yaha caharo direction me move kiya 
	floodFill(screen , x ,  y -1, newC , prevc);   // hain    ..  
	floodFill(screen , x,  y+1 , newC , prevc); 
}

int main(){

    int screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 2, 2, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 2, 2, 0},
                      {1, 1, 1, 1, 1, 2, 1, 1},
                      {1, 1, 1, 1, 1, 2, 2, 1},
                     };
    int x = 4, y = 4, newC = 3;
    int prevc = screen[x-1][y-1];
    floodFill(screen, x, y, newC , prevc);
 
    cout << "Updated screen after call to floodFill: \n";
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
           cout << screen[i][j] << " ";
        cout << endl;

     }

	return 0 ; 
}