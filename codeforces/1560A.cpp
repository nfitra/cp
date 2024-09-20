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

vector<int> likedNumber()
{
    int n = 1667;
    vector<int> liked;

    int order = 1;
    for (int i = 1; i < n; i++)
    {
        if (!(i % 3 == 0 || i % 10 == 3))
        {
            // cout << i << endl;
            liked.push_back(i);
            if (liked.size() == 1000)
            {
                break;
            }
        }
    }

    return liked;
}

int main()
{
    fast;

    vector<int> liked = likedNumber();

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        cout << liked[k-1] << endl;
    }
}