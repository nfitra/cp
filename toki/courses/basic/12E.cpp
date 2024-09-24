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

    int n, d;
    cin >> n >> d;

    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    int max = 0;
    int min = 1000000000;
    int degree;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            degree = pow(abs(x[j] - x[i]), d) + pow(abs(y[j] - y[i]), d);
            if (degree > max)
                max = degree;
            if (degree < min)
                min = degree;
        }
    }

    cout << min << " " << max << endl;
}