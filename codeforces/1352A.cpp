#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lcase(s) transform(s.begin(),s.end(),s.begin(), :: tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define sz(x) sizeof(x)/sizeof(x[0])
#define all(x) x.begin(),x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int len = to_string(n).length();
        int round[len], head=0;

        int x=len, div, last=0;
        do
        {
            div = n % (int)pow(10, x-1);
            x = to_string(div).length();
            if(last == x)
                div = 0;
            last = x;

            round[head++] = n - div;

            n = div;
            if(div == 0)
                break;
        }
        while(x);

        cout << head << endl;
        for(int x=0; x<head; x++)
        {
            cout << round[x] << " ";
        }
        cout << endl;
    }
}
