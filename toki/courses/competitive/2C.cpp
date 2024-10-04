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

bool solve(int x)
{
    int count = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (i == x / i)
                count++;
            else
                count += 2;
        }
    }

    return (count == 3 || count == 4);
}

int main()
{
    fast;

    int n;
    cin >> n;

    while (n--)
    {
        int tmp;
        cin >> tmp;

        bool ans = solve(tmp);
        if (ans)
            cout << "YA" << endl;
        else
            cout << "BUKAN" << endl;
    }
}