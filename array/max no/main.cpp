#include <iostream>

using namespace std;
int missigno(int arr[],int n ){
   int total = (n+1)*(n+2)/2;

   for (int i =0;i<n; i++)
      total= total-arr[i];
     return total;
}
int maxno(int arr[],int n){
   int maxx=arr[0];
   for (int i=1; i<n; i++){
      if (arr[i]>maxx)
        maxx = arr[i];
   }

        return maxx;
}

int main()
{
    int a[]={1,4,5,3};
    cout << missigno(a,4) << endl;
    cout << maxno(a,4) << endl;
    return 0;
}
