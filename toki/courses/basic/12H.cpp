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

set<int> getPrimeNumbers()
{
    int n = 1000001;
    vector<int> arr(n, 0);

    arr[0] = arr[1] = 1;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < n; j+=i)
            {
                arr[j] = 1;
            }
        }
    }

    set<int> prime;
    for (int i = 2; i < n; i++)
    {
        if (!arr[i])
        {
            prime.insert(i);
        }
    }

    return prime;
}

int main()
{
    fast;

    set<int> prime = getPrimeNumbers();

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;

        if (prime.find(n) != prime.end())
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "BUKAN" << endl;
        }
    }
}