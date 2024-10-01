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

    int n;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        if (m.find(tmp) != m.end())
            m[tmp]++;
        else
            m.insert({tmp, 1});
    }

    // for (int i = 1; i <= m.size(); i++)
    // {
    //     cout << i << " " << m[i] << endl;
    // }

    int modus, max=0;
    for (int i = 1; i <= m.size(); i++)
    {
        if(m[i] >= max) {
            modus = i;
            max = m[i];
        }
    }

    cout << modus << endl;
}