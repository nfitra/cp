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

    vector<int> p1;
    vector<int> p2;
    vector<int> p3;

    int t1 = 0;
    int t2 = 0;
    int t3 = 0;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            p1.push_back(i+1);
            t1++;
        }
        else if (t == 2)
        {
            p2.push_back(i+1);
            t2++;
        }
        else
        {
            p3.push_back(i+1);
            t3++;
        }
    }

    int least = min(min(t1, t2), t3);
    cout << least << endl;
    for (int i = 0; i < least; i++)
    {
        cout << p1[i] << " " << p2[i] << " " << p3[i] << endl;
    }
}