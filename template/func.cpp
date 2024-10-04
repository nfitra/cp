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

vector<int> prime()
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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else
        gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

ll sumMultiple(int a, int b)
{
    int n = a / b;
    return 0.5 * n * ((n + 1) * b);
}