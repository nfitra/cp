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

    int a,b;
    cin >> a >> b;

    int samecol, diffcol;
    if(a > b)
    {
        diffcol = b;
        samecol = (a-b) / 2;
    }
    else if(a < b)
    {
        diffcol = a;
        samecol = (b-a) / 2;
    }
    else
    {
        diffcol = a;
        samecol = 0;
    }
    cout << diffcol << " " << samecol << endl;
}
