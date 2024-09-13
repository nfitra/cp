#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int FPB(int a, int b)
{
    int r = 0;
    while(b!=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int KPK(int a, int b)
{
    return a*b / FPB(a, b);
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int y;
        cin >> y;

        int n;
        cin >> n;
        int arr[n];
        for(int x=0; x<n; x++)
        {
            cin >> arr[x];
        }

        int div = arr[0];
        for(int x=1; x<n; x++)
        {
            int kpk = KPK(div, arr[x]);
            div = kpk;
        }

        int fin = y + div;
        cout << fin << endl;
    }
}
