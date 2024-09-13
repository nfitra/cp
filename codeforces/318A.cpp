#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include <cmath>

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lcase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s) / sizeof(s[0])
#define all(s) x.begin(), x.end()
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    fast;

    ll n, k;
    cin >> n >> k;

    ll mid = ceil((double)n / 2);

    if (k <= mid)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        cout << 2 * (k - mid) << endl;
    }
}
