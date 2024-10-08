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
#define loop2(n) for (int j = 0; j < n; j++)
#define arrsort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

int main()
{
    fast;

    int n;
    cin >> n;

    unordered_map<string, int> db;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (db.find(s) != db.end())
        {
            db[s]++;
            cout << s + to_string(db[s]) << endl;
        }
        else
        {
            db[s] = 0;
            cout << "OK" << endl;
        }
    }
}