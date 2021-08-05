 #include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int add (int a,int b ,int c, int d)
{
    int max1;
   if(a>b){
    max1 =a;
    }
    else if(b>a){
        max1=b;
    }
      else if(c>a){

        max1=c;
    }
        else {
        max1= d;
    }


    return max1;

}
int main() {
    int t;
    t= add (-1,2,6,5);
    cout<<t<<endl;

    return 0;
}
