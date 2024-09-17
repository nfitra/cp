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

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sS = 0, sD = 0;
    int pL = 0, pR = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[pL] < arr[pR])
            {
                sS += arr[pR];
                pR--;
            }
            else
            {
                sS += arr[pL];
                pL++;
            }
        }
        else
        {
            if (arr[pL] < arr[pR])
            {
                sD += arr[pR];
                pR--;
            }
            else
            {
                sD += arr[pL];
                pL++;
            }
        }
    }

    cout << sS << " " << sD << endl;
}