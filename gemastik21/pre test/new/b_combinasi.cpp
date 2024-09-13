#include <iostream>
#include <string>
using namespace std;

int long long fact(int x) {
    int long long fact=1;
    for(int a=1; a<=x; a++){
        fact*=a;
    }
    return fact;
}


int main()
{
    int n, arr[10000];
    cin >> n;

    int x=0, sum=0;
    while (true)
    {
        //cout << x << endl;
        cin >> arr[x];

        sum+=arr[x];
        x++;

        if (cin.peek() == '\n')
        {
            break;
        }
    }
    cout << x << endl;
    cout << sum << endl;

    int a, r;

    a = x+(n-sum)-1;
    r = n-sum;

    //cout << fact(a) << endl << fact(r) << endl << fact(a-r) << endl;

    int long long atas = fact(a);
    int long long bawah = fact(a-r) * fact(r);
    cout << atas << endl << bawah << endl;

    int long long comb = atas / bawah;

    cout << comb << endl;
}
