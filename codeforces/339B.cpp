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

    int n, m;
    cin >> n >> m;

    int a[m], j;
    int p = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];

        if (i == 0)
            j = 1;
        else
            j = a[i - 1];

        for (j; j <= n; j++)
        {
            if (j == n && j > a[i])
            {
                j = 1;
            }

            if (j == a[i])
                break;

            p++;
        }
    }
    cout << p << endl;
}