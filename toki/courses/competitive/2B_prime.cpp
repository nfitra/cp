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

vector<int> getPrime()
{
    int n = 1000000;
    vector<bool> v(n,1);
    // fill(v.begin(), v.end(), 1);

    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = i * i; j < n; j += i)
        {
            if (v[j])
            {
                v[j] = 0;
            }
        }
    }

    vector<int> prime;
    for (int i = 2; i < n; i++)
    {
        if (v[i])
        {
            prime.push_back(i);
        }
    }

    return prime;
}

int main()
{
    fast;

    vector<int> prime = getPrime();

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        cout << prime[k - 1] << endl;
    }
}