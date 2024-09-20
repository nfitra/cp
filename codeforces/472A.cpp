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

set<int> composite()
{
    int n = 1000000;
    bool prime[n];
    fill(prime, prime + n, 1);

    for (int i = 2; i < sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    set<int> composite;
    for (int i = 0; i < n; i++)
    {
        if (!prime[i])
        {
            composite.insert(i);
        }
    }

    return composite;
}

int main()
{
    fast;

    set<int> comp = composite();

    int n;
    cin >> n;

    int l = floor(n / 2.0);
    int r = ceil(n / 2.0);

    for (int i = 0; i < n / 2; i++)
    {
        if (comp.find(l) != comp.end() && comp.find(r) != comp.end())
        {
            cout << l << " " << r << endl;
            break;
        }
        else
        {
            l--;
            r++;
        }
    }

    return 0;
}