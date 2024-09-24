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

    string s;
    int k;
    cin >> s >> k;

    for (int x = 0; x < 100; x++)
    {
        for (int i = 0; i < s.length(); i++)
        {
            int div = 'z' - s[i] + k;
            if (div >= 26)
            {
                s[i] = 'z' - div % 26;
            }
            else
            {
                s[i] = s[i] - k;
            }
        }

        cout << s << endl;
    }
}