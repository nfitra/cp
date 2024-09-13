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

    string s1;
    cin >> s1;

    bool founded = 0;
    loop(s1.length())
    {
        if (s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B')
        {
            if (founded)
            {
                cout << " ";
                founded = 0;
            }
            i += 2;
            continue;
        }
        else
        {
            founded = 1;
            cout << s1[i];
        }
    }
}
