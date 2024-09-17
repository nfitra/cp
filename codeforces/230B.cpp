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

const int sqrt_lim = 1000000;

set<long long> prime_squares()
{
    static bool arr[sqrt_lim];

    for (int i = 2; i * i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < sqrt_lim; j += i)
            {
                arr[j] = true;
            }
        }
    }

    set<long long> res;
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            res.insert((long long)i * i);
        }
    }
    return res;
}

int main()
{
    fast;

    set<long long> sq(prime_squares());

    int n;
    cin >> n;

    ll x, s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (sq.find(x) != sq.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}