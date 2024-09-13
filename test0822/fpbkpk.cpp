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
    int arr[T];
    for(int x=0; x<T; x++)
    {
        cin >> arr[x];
//        arr[x] = x+1;
    }

    int div = arr[0];
    for(int x=1; x<T; x++)
    {
        int kpk = FPB(div, arr[x]);
        div = kpk;
    }
    cout << "FPB: " << div << endl;
}
