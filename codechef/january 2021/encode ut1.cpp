#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    int t; cin >> t; //test cases
    int bit = 0;
    int decimal = 0;
    while (t--)
    {
        int n;  //length of encoded string
        cin >> n;
        string eString;
        cin >> eString;
        for (int i = 0; i < eString.length(); i++)
        {
            ++bit;
            if (eString[i] == 1)
            {
                decimal += pow(2, (4 - bit));
            }
            if (bit == 4)
            {
                bit = 0;
                cout << alphabets[decimal];
                decimal = 0;
            }
        }
        cout << endl;
    }

    return 0;
}
