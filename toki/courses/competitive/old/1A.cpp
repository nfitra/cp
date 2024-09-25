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

struct Part
{
    string id;
    int n1;
    int n2;
    int n3;
    int score;
};

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        string c;

        cin >> n >> m;
        cin >> c;

        vector<Part> part;
        for (int i = 0; i < n; i++)
        {
            Part p;
            cin >> p.id >> p.n1 >> p.n2 >> p.n3;
            p.score = p.n1 + p.n2 * 2 + p.n3 * 3;

            part.push_back(p);
        }

        sort(part.begin(), part.end(), [](const Part &a, const Part &b)
             { return a.score < b.score; });

        for (int i = 0; i < n; i++)
        {
            if (part[i].id == c)
            {
                if (i < m)
                    cout << "YA" << endl;
                else
                    cout << "TIDAK" << endl;
                    
                break;
            }
        }
    }
}