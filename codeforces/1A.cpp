#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include<cmath>

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s)/sizeof(s[0])
#define sz(s) sizeof(s)/sizeof(s[0])
#define all(s) x.begin(),x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast;

    ull n, m, a, res;
    cin >> n >> m >> a;

    res = (ceil((double)n/a)*ceil((double)m/a));

    cout << res  << endl;
}
