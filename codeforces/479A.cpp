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
#define arrmax(arr) *max_element(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

int main()
{
    fast;

    int a, b, c;

    cin >> a >> b >> c;

    int res[5];
    res[0] = a + b * c;
    res[1] = a * (b + c);
    res[2] = a * b * c;
    res[3] = (a + b) * c;
    res[4] = a + b + c;

    cout << arrmax(res) << endl;
}
