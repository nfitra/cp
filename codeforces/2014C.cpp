#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include <cmath>
#include <unordered_map>

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lcase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s) / sizeof(s[0])
#define all(s) x.begin(), x.end()
#define loop(n) for (int i = 0; i < n; i++)
#define arrsort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll sum = 0;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }

        arrsort(a);

        double avg = sum / (2.0 * n);
        ll mid = a[n / 2];

        // cout << avg << " " << mid << endl;
        ll ans = (2.0 * n * mid + 1) - sum;

        if (ans < 0)
            ans = 0;

        cout << ans << endl;
    }
}