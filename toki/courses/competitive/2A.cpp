#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include <cmath>
#include <unordered_map>
#include <tuple>

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lcase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s) / sizeof(s[0])
#define all(s) x.begin(), x.end()
#define loop(n) for (int i = 0; i < n; i++)
#define sortarr(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

ll getGcd(ll a, ll b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else
        return getGcd(b, a % b);
}

int main()
{
    fast;

    ll a, b, c, d;
    ll e, f;

    cin >> a >> b >> c >> d;

    e = a * d + b * c;
    f = b * d;

    int gcd = getGcd(e, f);
    e /= gcd;
    f /= gcd;

    cout << e << " " << f << endl;
}