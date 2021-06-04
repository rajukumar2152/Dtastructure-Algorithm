#include <iostream>
using namespace std ;
// #define 4 4
// bool raju(int a[4][4],int x, int y , int sol[4][4]);


void printsol(int sol[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sol[i][j] = 0;
        }
        cout << endl;
    }
}
bool issave(int a[4][4], int x, int y) {
    if (x < 4 - 1 && y < 4 - 1 && x >= 0 && y >= 0 && a[x][y] == 1) {
        return true;
    }
    else
        return false ;
}
void  printmaze(int a[4][4]) {
    int  sol[4][4] = {{0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    } ;
    if (raju(a, 0, 0 , sol ) == false) {
        cout << "solution dores not exisit ";
        return false;
    }

    printsol(sol);
    return true ;

}


bool raju(int a[4][4], int x, int y , int sol[4][4]) {

    if (x == 4 - 1 && y == 4 - 1) {
        sol[x][y] = 1;
        return true;
    }
    if (issave(a, x, y) == true) {
        sol[x][y] = 1;

        if (raju(a, x + 1, y, sol) == true )
            return true;
        if (raju(a, x, y + 1, sol) == true)
            return true;
        else
            sol[x][y] = 0;
        return false;
    }
    return false ;
}
// return false;


int main() {
    int maze[4][4] = { { 1, 0, 0, 0 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 0 },

        printmaze(maze);
        //     int  sol[4][4]={{0,0,0,0},
        //                {0,0,0,0},
        //                {0,0,0,0},
        //                {0,0,0,0}} ;
        // if (raju (maze, 0,0,sol)==true);
        // cout <<"solution exist ";
        // if (raju (maze, 0,0,sol)==true);
        // cout <<"solution  does not exist exist ";
        // raju(maze,0,0,sol);





        return 0;
    }