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

ll sumMultiple(int a, int b)
{
    int n = a / b;
    return 0.5 * n * ((n + 1) * b);
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int tmp;
        cin >> tmp;

        ll s4 = sumMultiple(tmp, 4);
        ll s7 = sumMultiple(tmp, 7);
        ll s_47 = sumMultiple(tmp, 28);

        // cout << s4 << " " << s7 << " " << s_47 << endl;
        cout << s4 + (s7 - s_47) << endl;
    }
}