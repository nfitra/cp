#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define sz(x) sizeof(x)/sizeof(x[0])
#define all(x) x.begin(),x.end()
#define fl(i,x,n) for (int i = x; i < n; i++)

using namespace std;

int main()
{
    fast

    int k,r;
    cin >> k >> r;

    fl(i1,1,11)
    {
        if((k*i1)% 10 == r || (k*i1)% 10 == 0 )
        {
            cout << i1 << endl;
            break;
        }
    }
}
