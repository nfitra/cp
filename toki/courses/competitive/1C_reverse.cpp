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
#define sortarr(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

int reverse(int x)
{
    int tmp = x;
    int ret = 0;

    while(tmp > 0)
    {
        ret = (ret * 10) + (tmp % 10);
        tmp = tmp / 10;
    }

    return ret;
}

int main()
{
    fast;

    int a,b;
    cin >> a >> b;

    int add = reverse(a) + reverse(b);

    cout << reverse(add) << endl;
}