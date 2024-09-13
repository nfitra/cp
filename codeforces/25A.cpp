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
#define arrsort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

int main()
{
    fast;
    int n;
    cin >> n;

    int arr[n];
    loop(n)
    {
        cin >> arr[i];
        arr[i] = arr[i] % 2;
    }

    int cDiff = count(arr, arr + n, 1);
    if (cDiff > n - cDiff)
    {
        loop(n)
        {
            if (!arr[i])
            {
                cout << i + 1;
                break;
            }
        }
    }
    else
    {
        loop(n)
        {
            if (arr[i])
            {
                cout << i + 1;
                break;
            }
        }
    }
}
