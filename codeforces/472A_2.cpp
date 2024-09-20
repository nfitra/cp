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

bool composite(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    fast;

    int n;
    cin >> n;

    int l = floor(n / 2.0);
    int r = ceil(n / 2.0);

    for (int i = 0; i < n / 2; i++)
    {
        if (composite(l) && composite(r))
        {
            cout << l << " " << r << endl;
            break;
        }
        else
        {
            l--;
            r++;
        }
    }

    return 0;
}