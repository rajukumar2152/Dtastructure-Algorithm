#include <iostream>

using namespace std;
int fun1(int a[])
{

int b=100;
return a[2]=b;

}

int main()
{
    int g[]={1,2,3};
    int a=10,c;
    g[2]=a;
    int *p ;
    p=&a;
    cout << g<< endl;
        cout << (g+1)<< endl;
        cout << *g<< endl;
        cout << *(g+2)<< endl;
        c= fun1(&g[1]);
         cout << g[1] <<endl;
        cout << c <<endl;
        for(i=0; i<3;i++)
        {
            cin>>g[i];

        }
        cout<<g[];


    return 0;
}
