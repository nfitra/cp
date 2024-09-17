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

    int s, n;
    cin >> s >> n;

    map<int, multiset<int, greater<int>>> bosses;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        bosses[x].insert(y);
    }

    bool loss = 0;
    for (const auto &pair : bosses)
    {
        for (const auto &y : pair.second)
        {
            if (s > pair.first)
            {
                s += y;
            }
            else
            {
                loss = true;
                break;
            }
        }
        if (loss)
            break;
    }

    if (loss)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}