
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        int count = 0;
        int ans = 0 ;

        for (int i = 0; i < N; i++)
        {
            if (A[i] > (i + 1))
            {
                // cout << "Second" << endl;
                count = 1 ;
                exit(0);
            }

            ans = ans + (i + 1) - A[i];

        }
        if (count = 1) {
            cout << "Second" << endl;
        }
        else {
            if (ans % 2 != 0)
                cout << "First" << endl;
            else
                cout << "Second" << endl ;
        }


    }
    return 0;
}