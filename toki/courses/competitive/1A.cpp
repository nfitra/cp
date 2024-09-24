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

    int t, n, m, a;
    cin >> t >> n >> m >> a;

    int p[n], n1[n], n2[n], n3[n], s[n];
    map<int, string> fin;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> n1[i] >> n2[i] >> n3[i];
        s[i] = n1[i] + n2[i] * 2 + n3[i] * 3;


        fin[s[i]] = p[i];
    }

    int 
    for(int i=0; i<n; i++)
    {
    }
}