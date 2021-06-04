#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

int  eggdroprecursive(int egg ,  int floor ) {
    if (floor == 1 || floor == 0) //agar 1 flor ho to try 1 hi hoga vhahe egg kiytne bhi  ho .  0 floor hua 0 ttry
        return floor ;
    if (egg == 1)
        return floor ; // 1 egg hain wrost case me k try lagega
    int min = INT_MAX;
    // otherwise hum blok of floor lete jayenge
    for (int x = 1 ; x <= floor ; x++) {
        int result;
        // hum blocks me bat bat denge x ke through
        result = max(eggdroprecursive(egg - 1 , x - 1) , //x  block par mil gaya to yaha ek egg kam ho jayega aur ek floor bhi kam ho  jayega
                     eggdroprecursive(egg, floor - x) ) ; // agar x block par nahi moila to hum uper chek karenge ;
        if (result < min)
            min = result;
    }

    return 1 + min ;


}


int main() {
    cout << eggdroprecursive(2 , 36);


    return 0 ;
}
// it is too much time consuming . exponettial time is taken here  .