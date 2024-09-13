#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define sz(x) sizeof(x)/sizeof(x[0])
#define all(x) x.begin(),x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast

    int n,k;
    cin >> n >> k;

    int lesstime = 240 - k;
    int res=0;
    for(int x=1; x<=n; x++)
    {
        lesstime -= 5*x;
        if(lesstime <0)
            break;
        res++;
    }
    cout << res << endl;
}
